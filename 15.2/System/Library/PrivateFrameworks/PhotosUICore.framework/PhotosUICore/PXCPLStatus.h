@class NSString, NSDate;

@interface PXCPLStatus : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) long long itemsToUploadProgressPercentage;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isSyncing;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsToUpload;
@property (nonatomic) float itemsToUploadProgress;
@property (nonatomic) unsigned long long numberOfItemsToAdd;
@property (nonatomic) unsigned long long numberOfOriginalsToDownload;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic) BOOL isUserPaused;
@property (nonatomic) BOOL isInLowDataMode;
@property (nonatomic) BOOL isInLowPowerMode;
@property (nonatomic) BOOL isExceedingBatteryQuota;
@property (nonatomic) BOOL isExceedingCellularQuota;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic) BOOL isCellularDataDisabled;
@property (nonatomic) BOOL isInAirplaneMode;
@property (nonatomic) BOOL isClientVersionTooOld;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL isInSoftResetSync;
@property (nonatomic) BOOL isInHardResetSync;
@property (nonatomic) BOOL hasCloudQuotaOffer;
@property (nonatomic) BOOL cloudQuotaOfferHasAssetCounts;

+ (id)statusWithStringRepresentation:(id)a0;
+ (id)statusWithStringRepresentation:(id)a0 currentDate:(id)a1;

- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)a0 currentDate:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEqualToCPLStatus:(id)a0;

@end
