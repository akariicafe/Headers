@class NSMutableArray;

@interface ABSMultiValue : NSObject

@property (readonly, nonatomic) unsigned int propertyType;
@property (readonly, nonatomic) BOOL mutable;
@property (readonly, nonatomic) NSMutableArray *values;

+ (void)initialize;

- (unsigned long long)_cfTypeID;
- (id)allValues;
- (id)mutableCopy;
- (BOOL)removeValueAtIndex:(long long)a0;
- (void).cxx_destruct;
- (int)identifierAtIndex:(long long)a0;
- (id)labelAtIndex:(long long)a0;
- (BOOL)addValue:(id)a0 label:(id)a1 outIdentifier:(int *)a2;
- (id)copyValueAtIndex:(long long)a0;
- (unsigned long long)indexForIdentifier:(int)a0;
- (unsigned long long)indexOfValue:(id)a0;
- (id)initWithPropertyType:(unsigned int)a0 mutable:(BOOL)a1 values:(id)a2;
- (BOOL)insertValue:(id)a0 label:(id)a1 atIndex:(long long)a2 outIdentifier:(int *)a3;
- (int)nextLegacyIdentifier;
- (BOOL)replaceLabel:(id)a0 atIndex:(long long)a1;
- (BOOL)replaceValue:(id)a0 atIndex:(long long)a1;

@end
