@class MPSGraphType;

@interface MPSGraphListType : MPSGraphType

@property (copy) MPSGraphType *elementType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithElementType:(id)a0;

@end
