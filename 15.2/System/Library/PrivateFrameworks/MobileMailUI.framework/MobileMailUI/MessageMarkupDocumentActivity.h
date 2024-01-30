@protocol ContentRepresentationHandlingDelegate;

@interface MessageMarkupDocumentActivity : UIActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (nonatomic) long long context;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1;

@end
