@class NSString, _PSSuggester;

@interface CNAutocompletePeopleSuggesterFeedback : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) _PSSuggester *psSuggester;

+ (id)sharedInstance;
+ (void)provideFeedback:(id)a0;
+ (id)bundleIdentifier;
+ (void)userEnteredContact:(id)a0;
+ (void)userEnteredExistingSession;
+ (void)userEnteredNewSession;
+ (void)userNavigatedAwayFromSession;
+ (void)userRemovedContact:(id)a0;
+ (void)userSelectedFromContactPicker:(id)a0;
+ (void)userSelectedSuggestion:(id)a0;
+ (void)userTerminatedSession;
+ (void)didReceiveSuggestions:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
