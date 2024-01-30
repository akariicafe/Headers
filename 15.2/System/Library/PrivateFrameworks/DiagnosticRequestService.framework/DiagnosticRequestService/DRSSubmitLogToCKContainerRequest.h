@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (Class)_moClass;

- (id)recordRepresentation;
- (id)requestType;
- (id)targetContainerName;
- (unsigned long long)expectedType;
- (id)initWithXPCDict:(id)a0;
- (void).cxx_destruct;
- (id)_metadataDescription;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;

@end
