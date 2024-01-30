@class BPSPublisher, BMBookmarkablePublisher;

@interface ATXProactiveSuggestionPartialIntentHandlingPublisher : NSObject

@property (retain, nonatomic) BPSPublisher *uiFeedbackPublisher;
@property (retain, nonatomic) BMBookmarkablePublisher *appLaunchPublisher;
@property (retain, nonatomic) BMBookmarkablePublisher *intentPublisher;

- (void).cxx_destruct;
- (id)partialIntentUIFeedbackPublisher;
- (id)_timestampFromEvent:(id)a0;
- (id)initWithUIFeedbackPublisher:(id)a0 appLaunchPublisher:(id)a1 intentPublisher:(id)a2;

@end
