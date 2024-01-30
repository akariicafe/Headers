@class PKMessageExtensionMessageBubbleView;
@protocol PKMessageExtensionMessageBubbleViewControllerDelegate;

@interface PKMessageExtensionMessageBubbleViewController : UIViewController {
    id<PKMessageExtensionMessageBubbleViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) PKMessageExtensionMessageBubbleView *bubbleView;

- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didDoubleTapMessage;
- (void)didLongPressMessage;
- (void)didTapMessage;
- (double)heightThatFitsWidth:(double)a0;

@end
