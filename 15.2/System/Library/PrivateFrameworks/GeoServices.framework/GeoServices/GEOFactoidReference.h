@class GEOPDFactoidReference;

@interface GEOFactoidReference : NSObject {
    GEOPDFactoidReference *_factoidReference;
}

@property (readonly, nonatomic) unsigned int indexInFactoidComponent;
@property (readonly, nonatomic) int linkStyle;

- (id)initWithFactoidReference:(id)a0;
- (void).cxx_destruct;

@end
