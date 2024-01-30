@class NSURL;
@protocol ContentRepresentationHandlingDelegate;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (retain, nonatomic) NSURL *url;

- (id)activityType;
- (void).cxx_destruct;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1 url:(id)a2;

@end
