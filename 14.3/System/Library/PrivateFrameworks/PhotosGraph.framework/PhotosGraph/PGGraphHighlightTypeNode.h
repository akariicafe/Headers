@class NSString;

@interface PGGraphHighlightTypeNode : PGGraphPropertylessNode {
    NSString *_label;
}

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
