@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightLocalIdentifiers;
@property (readonly, nonatomic) NSSet *highlights;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;
- (id)initWithHighlightLocalIdentifiers:(id)a0;
- (id)initWithHighlights:(id)a0;

@end
