@class NSArray, NSMutableDictionary, NSDateInterval, PHPhotoLibrary;

@interface PHSuggestionMessageContext : NSObject

@property (readonly, nonatomic) NSArray *cnParticipants;
@property (readonly, nonatomic) NSArray *phParticipants;
@property (readonly, nonatomic) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSArray *resolvedParticipants;
@property (retain, nonatomic) NSArray *messageTokens;
@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long numberOfParticipants;

- (id)description;
- (void).cxx_destruct;
- (id)detailedDescription;
- (id)initWithMessages:(id)a0 participantsFromContacts:(id)a1 photoLibrary:(id)a2;
- (id)initWithMessages:(id)a0;
- (id)initWithMessages:(id)a0 participantsFromPersons:(id)a1 photoLibrary:(id)a2;
- (void)setCnParticipants:(id)a0;
- (void)setPhParticipants:(id)a0;
- (id)_suggestionsMatchingType:(long long)a0;
- (void)matchWithSuggestions:(id)a0;
- (id)matchingResultWithSuggestion:(id)a0;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned long long)a0;
- (id)_mostRecentSuggestionFromSuggestions:(id)a0;

@end
