@class NSString, UIWindow, FBScene;

@interface DBFocusAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double priority;
@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) FBScene *scene;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1 priority:(double)a2 window:(id)a3 application:(id)a4 pid:(int)a5 scene:(id)a6;

@end
