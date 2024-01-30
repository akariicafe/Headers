@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHighlightUUIDs:(id)a0;

@end
