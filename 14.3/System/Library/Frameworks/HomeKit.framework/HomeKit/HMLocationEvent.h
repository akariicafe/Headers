@class HMFLocationAuthorization, CLRegion;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMFLocationAuthorization *authorization;
@property (nonatomic) int locationAuthorization;
@property (retain, nonatomic) CLRegion *region;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDict:(id)a0 region:(id)a1;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (void)_updateRegion:(id)a0 completionHandler:(id /* block */)a1;
- (id)_serializeForAdd;
- (void)_retrieveLocationEvent;
- (void)updateRegion:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleEventUpdatedNotification:(id)a0;
- (void)__locationAuthorizationUpdated:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
