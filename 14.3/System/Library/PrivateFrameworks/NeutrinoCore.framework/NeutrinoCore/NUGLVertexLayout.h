@class NSArray;

@interface NUGLVertexLayout : NSObject

@property (readonly) long long count;
@property (readonly) NSArray *attributes;
@property (readonly) long long size;
@property (readonly) NSArray *attributeNames;

- (id)initWithAttributes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)offsetAtIndex:(unsigned long long)a0;
- (long long)offsetForAttribute:(id)a0;
- (id)attributeWithName:(id)a0;
- (unsigned long long)indexOfAttribute:(id)a0;

@end
