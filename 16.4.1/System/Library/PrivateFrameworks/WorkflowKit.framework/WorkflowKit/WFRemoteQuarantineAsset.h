@class NSString, CKRecordID, NSData, WFFileRepresentation;

@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem>

@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) long long contentVersion;
@property (retain, nonatomic) WFFileRepresentation *assetDataFile;
@property (copy, nonatomic) NSString *configuration;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;

@end
