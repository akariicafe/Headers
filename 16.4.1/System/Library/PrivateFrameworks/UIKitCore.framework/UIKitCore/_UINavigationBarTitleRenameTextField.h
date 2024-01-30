@class _UINavigationBarTitleRenamerSession, NSString, _UIPassthroughScrollInteraction, NSLayoutConstraint;

@interface _UINavigationBarTitleRenameTextField : UITextField <_UIPassthroughScrollInteractionDelegate, _UINavigationBarTitleRenamerContentView>

@property (readonly, nonatomic) _UINavigationBarTitleRenamerSession *session;
@property (readonly, nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) double horizontalTextInset;
@property (copy, nonatomic) id /* block */ horizontalTextInsetDidChangeCallback;

- (void)_becomeFirstResponder;
- (void)didMoveToWindow;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)willMoveToWindow:(id)a0;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (void)layoutSubviews;
- (BOOL)canResignFirstResponder;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_resignFirstResponder;
- (void)_setupIconViewIfNecessary;
- (BOOL)_shouldEndEditingOnReturn;

@end
