@class NSTimer, NSString, WFWorkflowProgressView, UITextView, UIImageView, WFFloatingViewConfiguration, NSProgress, WFWorkflowDescriptor;
@protocol WFWidgetCellDelegate;

@interface WFWidgetCell : WFFloatingView

@property (nonatomic) long long lastKnownWidgetFamily;
@property (readonly, nonatomic) WFWorkflowDescriptor *workflowDescriptor;
@property (retain, nonatomic) WFFloatingViewConfiguration *currentConfiguration;
@property (readonly, nonatomic) BOOL isRTL;
@property (retain, nonatomic) UITextView *nameView;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (readonly, nonatomic) WFWorkflowProgressView *progressView;
@property (retain, nonatomic) NSTimer *clearCompletedTimer;
@property (weak, nonatomic) id<WFWidgetCellDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *workflowIdentifier;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long runningState;
@property (nonatomic) BOOL completingSuccessfully;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)isMultiline;
- (id)description;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (BOOL)touchesContainNonIndirectTouch:(id)a0;
- (void)configureWithWorkflow:(id)a0 cornerRadius:(double)a1 family:(long long)a2;
- (void)resetProgressState;
- (void)resetToEmptyState;
- (BOOL)touchIsInView:(id)a0 event:(id)a1;

@end
