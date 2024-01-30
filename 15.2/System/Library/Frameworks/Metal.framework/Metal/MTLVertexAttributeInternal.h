@class NSString;

@interface MTLVertexAttributeInternal : MTLVertexAttribute {
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (BOOL)isPatchData;
- (void)setAttributeType:(unsigned long long)a0;
- (BOOL)isActive;
- (id)description;
- (BOOL)isPatchControlPointData;
- (unsigned long long)attributeType;
- (unsigned long long)attributeIndex;
- (id)initWithName:(id)a0 attributeIndex:(unsigned long long)a1 attributeType:(unsigned long long)a2 flags:(struct MTLAttributeFlags { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 5; } x0; unsigned char x1; } x0; })a3;
- (id)formattedDescription:(unsigned long long)a0;
- (id)name;
- (void)dealloc;

@end
