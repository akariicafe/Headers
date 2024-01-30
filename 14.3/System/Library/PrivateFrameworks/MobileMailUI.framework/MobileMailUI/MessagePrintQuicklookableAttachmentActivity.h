@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity

@property (retain, nonatomic) UIPrintPageRenderer *pageRenderer;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithPrintPageRenderer:(id)a0;

@end
