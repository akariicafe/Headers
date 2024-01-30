@class PXFeedbackStore;

@interface PXFeedbackCollector : NSObject

@property (readonly, nonatomic) PXFeedbackStore *feedbackStore;

- (void).cxx_destruct;
- (id)init;
- (id)_appVersion;
- (id)feedbackEntryFromDictionary:(id)a0;
- (void)addFeedbackEntry:(id)a0;
- (id)addFeedbackFromDictionary:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (id)_uniqueSystemIdentifier;

@end
