@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (Class)_moClass;
+ (BOOL)_shouldScrub;
+ (id)requiredSystemResourceName;

- (id)logType;
- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)requestType;
- (id)debugDescription;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)_tailspinOptions;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;

@end
