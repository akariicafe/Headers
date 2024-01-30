@class NSURL;
@protocol ContentRepresentationHandlingDelegate;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (retain, nonatomic) NSURL *url;

- (id)activityType;
- (void)_cleanup;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1 url:(id)a2;

@end
