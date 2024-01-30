@class NSString, _PSSuggester;

@interface CNAutocompletePeopleSuggesterFeedback : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) _PSSuggester *psSuggester;

+ (id)sharedInstance;
+ (id)bundleIdentifier;
+ (void)userEnteredExistingSession;
+ (void)userEnteredNewSession;
+ (void)userNavigatedAwayFromSession;
+ (void)userTerminatedSession;
+ (void)userSelectedSuggestion:(id)a0;
+ (void)userSelectedFromContactPicker:(id)a0;
+ (void)userEnteredContact:(id)a0;
+ (void)userRemovedContact:(id)a0;
+ (void)provideFeedback:(id)a0;
+ (void)didReceiveSuggestions:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
