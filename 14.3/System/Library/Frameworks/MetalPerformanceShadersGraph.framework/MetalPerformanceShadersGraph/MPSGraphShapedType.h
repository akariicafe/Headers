@class NSArray;

@interface MPSGraphShapedType : NSObject <NSCopying>

@property (copy) NSArray *shape;
@property unsigned int dataType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithShape:(id)a0 dataType:(unsigned int)a1;

@end
