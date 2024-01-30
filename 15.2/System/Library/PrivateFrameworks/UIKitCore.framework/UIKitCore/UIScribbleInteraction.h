@class NSString, UIView;
@protocol UIScribbleInteractionDelegate;

@interface UIScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>

@property (class, readonly, nonatomic) double _recommendedBlankSpaceHeight;
@property (class, readonly, nonatomic, getter=isPencilInputExpected) BOOL pencilInputExpected;

@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic, getter=_isDefaultSystemInteraction) BOOL _defaultSystemInteraction;
@property (readonly, weak, nonatomic) id<UIScribbleInteractionDelegate> delegate;
@property (readonly, nonatomic, getter=isHandlingWriting) BOOL handlingWriting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_lastEventSourceChanged:(long long)a0;

- (id)initWithDelegate:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)_setDefaultSystemInteraction:(BOOL)a0;
- (void).cxx_destruct;
- (id)scribbleInteractionWrapper;
- (void)_setHandlingWriting:(BOOL)a0;

@end
