@class NSString, UIView;
@protocol UIIndirectScribbleInteractionDelegate;

@interface UIIndirectScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic, getter=_isDefaultSystemInteraction) BOOL _defaultSystemInteraction;
@property (readonly, weak, nonatomic) id<UIIndirectScribbleInteractionDelegate> delegate;
@property (readonly, nonatomic, getter=isHandlingWriting) BOOL handlingWriting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_setDefaultSystemInteraction:(BOOL)a0;
- (void)_setHandlingWriting:(BOOL)a0;
- (id)scribbleInteractionWrapper;

@end
