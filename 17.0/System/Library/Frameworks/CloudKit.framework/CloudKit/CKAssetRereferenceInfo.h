@class NSString, NSURL, CKRecordZoneID, NSData, NSError;

@interface CKAssetRereferenceInfo : NSObject

@property (readonly, copy, nonatomic) CKRecordZoneID *sourceZoneID;
@property (copy) NSURL *contentBaseURL;
@property (copy) NSString *owner;
@property (copy) NSString *requestor;
@property (copy) NSData *assetKey;
@property (copy) NSData *referenceSignature;
@property (copy) NSString *downloadToken;
@property unsigned long long downloadTokenExpiration;
@property (retain) NSError *error;
@property (copy) NSString *destinationFieldName;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceZoneID:(id)a0;

@end
