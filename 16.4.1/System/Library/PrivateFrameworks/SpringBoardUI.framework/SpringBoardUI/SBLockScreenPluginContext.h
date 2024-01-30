@class NSString, NSDictionary, FBProcess;
@protocol FBSProcess, SBLockScreenPluginLifecycleObserver;

@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying>

@property (retain, nonatomic) FBProcess<FBSProcess> *process;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) id<SBLockScreenPluginLifecycleObserver> observer;
@property (copy, nonatomic) id /* block */ auxiliaryAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithName:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
