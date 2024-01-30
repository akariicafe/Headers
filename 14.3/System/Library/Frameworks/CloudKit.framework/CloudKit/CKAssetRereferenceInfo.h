@class NSString, NSURL, CKRecordZoneID, NSData, NSError;

@interface CKAssetRereferenceInfo : NSObject

@property (retain, nonatomic) CKRecordZoneID *sourceZoneID;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (retain, nonatomic) NSString *downloadToken;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *destinationFieldName;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithSourceZoneID:(id)a0;
- (id)description;

@end
