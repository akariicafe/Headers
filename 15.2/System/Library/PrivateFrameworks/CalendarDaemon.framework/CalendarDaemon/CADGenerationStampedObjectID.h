@interface CADGenerationStampedObjectID : CADObjectID

@property (readonly, nonatomic) int restoreGeneration;

- (id)initWithEntityType:(int)a0 entityID:(int)a1 generation:(int)a2;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;

@end
