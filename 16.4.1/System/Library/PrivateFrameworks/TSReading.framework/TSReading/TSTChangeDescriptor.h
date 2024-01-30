@class TSTCellRegion, NSHashTable;

@interface TSTChangeDescriptor : NSObject

@property (readonly, nonatomic) int changeDescriptor;
@property (readonly, nonatomic) TSTCellRegion *cellRegion;
@property (readonly, nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } cellID;
@property (readonly, nonatomic) TSTCellRegion *strokeRegion;
@property (retain, nonatomic) TSTCellRegion *expandedRegion;
@property (readonly, nonatomic) NSHashTable *referenceIdentifiers;

+ (id)changeDescriptorWithType:(int)a0;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 cellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 cellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a2 strokeRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a3;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 cellRegion:(id)a2 strokeRegion:(id)a3;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 strokeRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)changeDescriptorWithType:(int)a0 cellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1 strokeRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1 strokeRegion:(id)a2;
+ (id)changeDescriptorWithType:(int)a0 referenceIdentifiers:(id)a1;
+ (id)changeDescriptorWithType:(int)a0 strokeRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)changeDescriptorWithType:(int)a0 strokeRegion:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })cellRange;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })expandedRange;
- (id)initWithChangeDescriptorType:(int)a0 andCellRegion:(id)a1 andCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 andStrokeRegion:(id)a3 andReferenceIdentifiers:(id)a4;
- (void)setExpandedRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })strokeRange;

@end
