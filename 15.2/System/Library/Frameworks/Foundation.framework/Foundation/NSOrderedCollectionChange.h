@interface NSOrderedCollectionChange : NSObject

@property (readonly) id object;
@property (readonly) long long changeType;
@property (readonly) unsigned long long index;
@property (readonly) unsigned long long associatedIndex;

+ (id)changeWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2;
+ (id)changeWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2 associatedIndex:(unsigned long long)a3;

- (id)initWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2;
- (id)initWithObject:(id)a0 type:(long long)a1 index:(unsigned long long)a2 associatedIndex:(unsigned long long)a3;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)debugDescription;

@end
