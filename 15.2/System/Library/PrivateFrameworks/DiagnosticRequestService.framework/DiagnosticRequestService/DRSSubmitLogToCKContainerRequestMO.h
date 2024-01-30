@class NSString, NSData;

@interface DRSSubmitLogToCKContainerRequestMO : DRSSubmitLogRequestMO

@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *fileAssetField;
@property (retain, nonatomic) NSData *recordDictionaryData;
@property (copy, nonatomic) NSString *recordType;

+ (id)fetchRequest;

@end
