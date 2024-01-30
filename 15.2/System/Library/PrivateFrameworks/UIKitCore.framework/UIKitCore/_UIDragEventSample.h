@class UIWindow;

@interface _UIDragEventSample : NSObject

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sceneLocation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } locationInWindow;
@property (readonly, nonatomic) BOOL isApplicationEnter;
@property (readonly, nonatomic) BOOL isApplicationWithin;
@property (readonly, nonatomic) BOOL isApplicationExit;
@property (readonly, nonatomic) BOOL isPolicyDriven;
@property (readonly, nonatomic) BOOL isDragEnd;
@property (readonly, nonatomic) unsigned int windowServerHitTestContextID;
@property (nonatomic) BOOL hasBeenDelivered;

+ (id)sampleFromHIDEvent:(struct __IOHIDEvent { } *)a0;

- (id)hitTestWithEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
