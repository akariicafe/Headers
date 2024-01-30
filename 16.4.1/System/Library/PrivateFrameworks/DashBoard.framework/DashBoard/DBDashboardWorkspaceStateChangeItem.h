@class NSString;

@interface DBDashboardWorkspaceStateChangeItem : NSObject <DBWorkspaceStateChangeItem>

@property (nonatomic) unsigned long long presentationPreference;
@property (readonly, nonatomic) BOOL prefersAnimation;
@property (nonatomic) unsigned long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)_buildDescriptionWithBuilder:(id)a0;
- (id)_newEntityFromChangeItemWithPolicyProvider:(id)a0;

@end
