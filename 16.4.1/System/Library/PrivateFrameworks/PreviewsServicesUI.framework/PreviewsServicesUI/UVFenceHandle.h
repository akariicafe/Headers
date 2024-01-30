@class BKSAnimationFenceHandle, NSString;

@interface UVFenceHandle : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) BKSAnimationFenceHandle *underlying;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)createForScene:(id)a0;
+ (id)createForAllScenes;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copy;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithUnderlying:(id)a0;
- (void)applyToAllScenes;
- (void)applyToScene:(id)a0;

@end
