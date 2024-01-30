@class NSString, UIView;
@protocol UIPencilInteractionDelegate;

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction>

@property (class, nonatomic, setter=_setPrefersPencilOnlyDrawing:) BOOL prefersPencilOnlyDrawing;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, readonly, nonatomic) long long preferredTapAction;

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) id<UIPencilInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)willMoveToView:(id)a0;
- (id)init;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (void)performDelegateDidTap;

@end
