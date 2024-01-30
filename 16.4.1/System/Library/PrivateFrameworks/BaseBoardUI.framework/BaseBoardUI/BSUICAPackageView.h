@class NSArray, CAStateController, NSString, CALayer, NSObject, NSDictionary;
@protocol CAStateControllerDelegate;

@interface BSUICAPackageView : UIView <CAStateControllerDelegate> {
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CALayer *_rootLayer;
    struct CGSize { double width; double height; } _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    id /* block */ _pendingCompletion;
    NSDictionary *_publishedObjectMap;
}

@property (readonly, copy, nonatomic) NSArray *publishedObjectNames;
@property (weak, nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;

- (id)initWithURL:(id)a0;
- (BOOL)setState:(id)a0 animated:(BOOL)a1;
- (BOOL)setState:(id)a0 animated:(BOOL)a1 transitionSpeed:(double)a2 completion:(id /* block */)a3;
- (void)stateController:(id)a0 transitionDidStart:(id)a1 speed:(float)a2;
- (BOOL)setState:(id)a0 onLayer:(id)a1 animated:(BOOL)a2 transitionSpeed:(double)a3 completion:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (id)publishedObjectWithName:(id)a0;
- (void)layoutSubviews;
- (void)stateController:(id)a0 didSetStateOfLayer:(id)a1;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)setState:(id)a0;

@end
