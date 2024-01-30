@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightLocalIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;
- (id)initWithHighlightLocalIdentifiers:(id)a0;

@end
