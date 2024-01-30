@protocol NSObject, NSCopying;

@interface PXDataSection : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) id<NSObject, NSCopying> outlineObject;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL containsAnyObjects;
@property (readonly, nonatomic) id content;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsAtIndexes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOutlineObject:(id)a0;
- (id)objectAtIndex:(long long)a0;

@end
