@class MPSGraphType;

@interface MPSGraphListType : MPSGraphType

@property (copy) MPSGraphType *elementType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElementType:(id)a0;

@end
