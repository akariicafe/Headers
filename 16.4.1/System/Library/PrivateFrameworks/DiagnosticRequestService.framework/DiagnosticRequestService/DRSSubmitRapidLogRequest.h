@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (unsigned long long)expectedType;
- (id)requestType;
- (id)debugDescription;
- (unsigned long long)logSizeLimitBytes;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)targetContainerName;
- (void)_configureRequestMO:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;

@end
