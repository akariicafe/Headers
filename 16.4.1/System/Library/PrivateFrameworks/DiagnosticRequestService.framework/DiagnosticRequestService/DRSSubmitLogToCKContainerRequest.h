@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (id)requestType;
- (id)debugDescription;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)targetContainerName;
- (void)_configureRequestMO:(id)a0;
- (id)recordRepresentation;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;

@end
