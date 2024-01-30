@class NSString, NSData;

@interface PFAssetAdjustmentFingerprintData : NSObject

@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (copy, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSData *baseImage;
@property (copy, nonatomic) NSString *baseImageFingerprint;
@property (copy, nonatomic) NSData *largeAdjustmentData;
@property (copy, nonatomic) NSString *largeAdjustmentDataFingerprint;
@property (copy, nonatomic) NSData *secondaryAdjustmentData;

- (void).cxx_destruct;

@end
