@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)a0 inProcess:(BOOL)a1;
+ (BOOL)isAutoLinkingEnabled;
+ (BOOL)isLinkDataValidForAddressBook:(void *)a0;

- (id)init;
- (void)makeInitialLinks;
- (void)dealloc;
- (void)removeAllLinks;
- (void)linkRecentlyAddedPeople;
- (void)presortPeople:(id)a0;
- (id)otherPeopleInDatabaseMatchingPerson:(void *)a0 notIncludingPeople:(id)a1;
- (BOOL)shouldLinkPerson:(void *)a0 toPeopleInDatabase:(id)a1 andNewlyAddedPeople:(id)a2 inInitialLinking:(BOOL)a3;
- (void)addPerson:(void *)a0 toDictionary:(id)a1 withProperty:(int)a2;
- (id)otherPeopleInArray:(id)a0 matchingPerson:(void *)a1;
- (void)makeLinksForAddedPeople:(id)a0 inInitialLinking:(BOOL)a1 countingOuterIterations:(unsigned long long *)a2 detectedLinkCount:(unsigned long long *)a3;
- (void)makeInitialLinksCountingOuterIterations:(unsigned long long *)a0;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)a0 withLimit:(long long)a1;
- (BOOL)linkRecentlyAddedPeopleWithLimit:(long long)a0;
- (id)suggestedPeopleToLinkWithPerson:(void *)a0 isInitialLinking:(BOOL)a1;
- (void)linkNewlyAddedPerson:(void *)a0;
- (id)initWithAddressBook:(void *)a0;

@end
