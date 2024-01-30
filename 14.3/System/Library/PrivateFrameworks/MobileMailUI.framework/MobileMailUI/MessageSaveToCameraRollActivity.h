@protocol ContentRepresentationHandlingDelegate;

@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (nonatomic) long long context;

- (id)activityType;
- (id)init;
- (void).cxx_destruct;
- (id)_beforeActivity;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (void)_prepareWithActivityItems:(id)a0;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1;

@end
