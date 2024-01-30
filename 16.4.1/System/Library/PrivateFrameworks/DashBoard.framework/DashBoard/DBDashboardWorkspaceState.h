@class DBDashboardEntity, NSString;

@interface DBDashboardWorkspaceState : NSObject <DBWorkspaceState, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) DBDashboardEntity *baseEntity;
@property (readonly, nonatomic) DBDashboardEntity *stackedEntity;
@property (readonly, nonatomic) NSString *activeBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithState:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_bundleIdentifierFromEntity:(id)a0;

@end
