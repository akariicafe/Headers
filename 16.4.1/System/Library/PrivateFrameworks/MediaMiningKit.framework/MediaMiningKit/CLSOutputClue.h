@class NSMutableArray, CLSEvent, CLSPersonIdentity, CLSPlace;

@interface CLSOutputClue : CLSClue {
    NSMutableArray *_relatedInputTimeClues;
    NSMutableArray *_relatedInputLocationClues;
    NSMutableArray *_relatedInputPeopleClues;
}

@property (retain) CLSPlace *relatedPlace;
@property (retain) CLSPersonIdentity *relatedPerson;
@property (retain) CLSEvent *relatedEvent;

+ (id)clueWithValue:(id)a0 forKey:(id)a1 confidence:(double)a2 relevance:(double)a3;
+ (id)clueWithValue:(id)a0 forKey:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)relatedInputLocationClues;
- (void)addRelatedInputClues:(id)a0;
- (BOOL)isEqualToClue:(id)a0;
- (id)relatedInputClues;
- (id)relatedInputPeopleClues;
- (id)relatedInputTimeClues;

@end
