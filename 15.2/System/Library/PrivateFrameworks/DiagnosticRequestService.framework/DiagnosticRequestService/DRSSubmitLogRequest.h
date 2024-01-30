@class NSString;

@interface DRSSubmitLogRequest : DRSRequest

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)entityName;
+ (Class)_moClass;

- (id)requestType;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (unsigned long long)expectedType;
- (id)initWithXPCDict:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)_metadataDescription;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;

@end
