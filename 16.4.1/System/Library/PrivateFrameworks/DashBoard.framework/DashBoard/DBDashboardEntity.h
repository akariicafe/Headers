@class NSString, DBDashboardWorkspaceStateChangeItem;

@interface DBDashboardEntity : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setSR_associatedChangeItem:) DBDashboardWorkspaceStateChangeItem *_sr_associatedChangeItem;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)a0;
- (BOOL)isApplicationEntity;
- (BOOL)isFullScreenEntity;
- (BOOL)isHomescreenEntity;
- (BOOL)isProxiedApplicationEntity;
- (BOOL)isSiriEntity;

@end
