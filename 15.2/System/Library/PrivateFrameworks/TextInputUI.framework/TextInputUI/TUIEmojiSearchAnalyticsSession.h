@class NSString, NSLocale;

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {
    NSLocale *_locale;
    NSString *_trackedSearchQuery;
    NSString *_initialInputModeIdentifier;
    unsigned long long _numberOfInitialCharacters;
    unsigned long long _numberOfEmojiInserted;
    unsigned long long _numberOfCharactersInserted;
    unsigned long long _numberOfCharactersDeleted;
    unsigned long long _numberOfClearActions;
}

+ (id)emojiSearchFieldSpecTuples;
+ (void)registerEventSpecIfNecessary;

- (void)endSession;
- (id)initWithLocale:(id)a0;
- (void)emojiInserted:(id)a0;
- (void).cxx_destruct;
- (void)beginSessionWithInitialSearchQuery:(id)a0;
- (void)searchQueryWasChangedTo:(id)a0;
- (void)clearButtonPressed;

@end
