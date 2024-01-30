@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchMutableFeatures;
+ (id)fetchProfileFeatures;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (BOOL)_featureNameExists:(id)a0 inGroups:(id)a1;
+ (void)resetFeatures;
+ (void)verifyOrphansForGroups:(id)a0;

- (void)toggle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;

@end
