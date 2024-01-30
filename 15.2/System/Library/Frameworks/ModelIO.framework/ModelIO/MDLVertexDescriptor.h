@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *attributes;
@property (retain, nonatomic) NSMutableArray *layouts;

+ (id)_decodeVertexDescriptorAttributesWithCoder:(id)a0;
+ (id)_decodeVertexDescriptorLayoutsWithCoder:(id)a0;
+ (id)decodeVertexDescriptorWithCoder:(id)a0;

- (void)addOrReplaceAttribute:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)reset;
- (void)setPackedOffsets;
- (void)setPackedStrides;
- (id)attributeNamed:(id)a0;
- (void)debugPrintToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)initWithVertexDescriptor:(id)a0;
- (void)_encodeVertexDescriptorAttributesWithCoder:(id)a0;
- (void)_encodeVertexDescriptorLayoutsWithCoder:(id)a0;
- (void)removeAttributeNamed:(id)a0;
- (void)encodeVertexDescriptorWithCoder:(id)a0;

@end
