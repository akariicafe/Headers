@class NSDictionary;

@interface SUCorePolicyPrepare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL skipPhase;
@property (retain, nonatomic) NSDictionary *basePrepareOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)summary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)backToDefaultsWithSkipPhaseSet:(BOOL)a0;
- (id)initWithSkipPhaseSet:(BOOL)a0;

@end
