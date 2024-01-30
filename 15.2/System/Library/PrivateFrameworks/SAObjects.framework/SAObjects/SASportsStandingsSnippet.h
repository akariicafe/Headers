@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSArray *selectedEntities;
@property (nonatomic) BOOL showCardinalPositions;

+ (id)standingsSnippet;
+ (id)standingsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
