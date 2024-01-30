@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (BOOL)_shouldScrub;
+ (id)requiredSystemResourceName;
+ (Class)_moClass;

- (id)requestType;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (unsigned long long)expectedType;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (void).cxx_destruct;
- (id)_metadataDescription;
- (id)_tailspinOptions;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)logType;

@end
