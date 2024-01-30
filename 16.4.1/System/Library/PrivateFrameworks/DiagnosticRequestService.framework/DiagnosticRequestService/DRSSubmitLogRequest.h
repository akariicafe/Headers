@class NSString;

@interface DRSSubmitLogRequest : DRSRequest

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (id)requestType;
- (id)debugDescription;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (id)replyForMessage:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (void).cxx_destruct;

@end
