@interface FBKTeamPermissions : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) FBKTeamPermissions *personalTeamPermissions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canView;
@property (readonly, nonatomic) BOOL canRespond;
@property (readonly, nonatomic) BOOL canClose;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, nonatomic) BOOL canAssign;
@property (readonly, nonatomic) BOOL canDemote;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithJSONObject:(id)a0;
- (id)initWithView:(BOOL)a0 respond:(BOOL)a1 close:(BOOL)a2 download:(BOOL)a3 assign:(BOOL)a4 demote:(BOOL)a5;

@end
