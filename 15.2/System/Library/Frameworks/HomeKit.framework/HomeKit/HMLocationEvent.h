@class HMFLocationAuthorization, CLRegion;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMFLocationAuthorization *authorization;
@property (nonatomic) long long locationAuthorization;
@property (retain, nonatomic) CLRegion *region;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_unconfigure;
- (id)initWithRegion:(id)a0;
- (id)initWithDict:(id)a0 region:(id)a1;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (void)updateRegion:(id)a0 completionHandler:(id /* block */)a1;
- (void)_retrieveLocationEvent;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (void)__locationAuthorizationUpdated:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;

@end
