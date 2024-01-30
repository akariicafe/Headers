@class DOMNode;

@interface DDRange : NSObject

@property (retain, nonatomic) DOMNode *node;
@property (nonatomic) long long startOffset;
@property (nonatomic) long long endOffset;

+ (id)rangeWithDOMRange:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDOMRange:(id)a0;

@end
