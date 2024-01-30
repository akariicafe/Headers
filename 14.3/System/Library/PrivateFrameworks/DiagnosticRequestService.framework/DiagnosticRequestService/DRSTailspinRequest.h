@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (Class)_moClass;
+ (id)requiredSystemResourceName;
+ (BOOL)_shouldScrub;

- (id)logType;
- (id)requestType;
- (void).cxx_destruct;
- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)_metadataDescription;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (id)_tailspinOptions;
- (BOOL)_dumpTailspinToDirectory:(id)a0;

@end
