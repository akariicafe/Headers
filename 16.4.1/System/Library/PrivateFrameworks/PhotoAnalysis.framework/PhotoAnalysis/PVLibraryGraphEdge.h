@class NSString, NSDictionary;

@interface PVLibraryGraphEdge : MAEdge {
    unsigned short _domain;
    float _weight;
    NSString *_label;
    NSDictionary *_properties;
}

- (float)weight;
- (unsigned short)domain;
- (id)properties;
- (id)label;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
