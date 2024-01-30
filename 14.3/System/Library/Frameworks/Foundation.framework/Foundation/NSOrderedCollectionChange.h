@interface NSOrderedCollectionChange : NSObject

@property (readonly) id object;
@property (readonly) long long changeType;
@property (readonly) unsigned long long index;
@property (readonly) unsigned long long associatedIndex;

+ (id)changeWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2 associatedIndex:(unsigned long long)a3;
+ (id)changeWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2;
- (id)debugDescription;
- (id)initWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2 associatedIndex:(unsigned long long)a3;

@end
