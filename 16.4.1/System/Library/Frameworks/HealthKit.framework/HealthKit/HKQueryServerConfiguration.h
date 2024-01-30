@class HKObjectType, _HKFilter, NSString;

@interface HKQueryServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKObjectType *objectType;
@property (retain, nonatomic) _HKFilter *filter;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL shouldDeactivateAfterInitialResults;
@property (nonatomic) BOOL shouldSuppressDataCollection;
@property (nonatomic) double activationTime;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
