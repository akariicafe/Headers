@class NSArray, NSMutableDictionary;
@protocol AltAspect;

@interface AltClipCollection : NSObject <NSFastEnumeration, NSCopying>

@property (class, readonly, nonatomic) NSArray *recommendedAspects;
@property (class, readonly, nonatomic) NSArray *recommendedAdditionalAspects;

@property (retain, nonatomic) NSMutableDictionary *clips;
@property (weak, nonatomic) id<AltAspect> parentClip;
@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;
@property (readonly) unsigned long long count;

- (id)initWithParent:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectClosestToKeyedSubscript:(id)a0;

@end
