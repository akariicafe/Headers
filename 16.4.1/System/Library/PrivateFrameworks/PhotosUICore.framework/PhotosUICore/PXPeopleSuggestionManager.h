@class PXSuggestionToken, NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject

@property (nonatomic) BOOL didReachEnd;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) PXSuggestionToken *suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount;
@property (nonatomic) unsigned long long autoConfirmationsCount;
@property (nonatomic) unsigned int confirmYesSoundID;
@property (nonatomic) unsigned int confirmNoSoundID;
@property (retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider;
@property (retain, nonatomic) NSMutableSet *confirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *rejectedSuggestions;
@property (retain, nonatomic) NSMutableSet *skippedSuggestions;
@property (weak, nonatomic) id<PXPeopleSuggestionManagerDelegate> delegate;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> dataSource;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) NSArray *currentSuggestions;
@property (readonly, nonatomic) BOOL canUndo;
@property (readonly, nonatomic) BOOL isLoading;

- (void)undo;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (BOOL)_fetchingSuggestions;
- (void)_loadMoreSuggestionsWithCompletion:(id /* block */)a0;
- (id)_nonSkippedSuggestionsForSuggestions:(id)a0;
- (void)_notifyDelegateWeHaveMoreSuggestions:(BOOL)a0;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)a0;
- (void)cancelPendingSuggestionLoading;
- (void)commitUserResponses;
- (id)commitUserResponsesToPerson:(id)a0;
- (BOOL)isSuggestionConfirmed:(id)a0;
- (void)markSuggestions:(id)a0 confirmed:(BOOL)a1 wantsSound:(BOOL)a2;
- (void)markSuggestionsAsSkipped:(id)a0;
- (void)preloadSounds;
- (void)removeAllSuggestions;
- (void)requestNextSuggestion;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)a0;

@end
