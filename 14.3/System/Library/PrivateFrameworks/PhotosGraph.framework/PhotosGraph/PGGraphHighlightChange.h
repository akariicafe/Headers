@class NSString, PGGraphHighlightNode;

@interface PGGraphHighlightChange : PGGraphChange

@property (readonly, nonatomic) NSString *highlightLocalIdentifier;
@property (retain, nonatomic) PGGraphHighlightNode *highlightNode;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (void)mergeChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithHighlightLocalIdentifier:(id)a0 updateTypes:(unsigned long long)a1;
- (id)description;
- (unsigned long long)type;

@end
