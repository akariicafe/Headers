@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToObjectCoercion : NSObject

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *blockByClass;
@property (retain, nonatomic) NSMutableOrderedSet *orderedClassNames;

- (id)initWithClass:(Class)a0;
- (void).cxx_destruct;
- (void)addCoercionToClass:(Class)a0 block:(id /* block */)a1;
- (id)availableClasses;
- (BOOL)canCoerceToObjectOfClass:(Class)a0;
- (id)coerceObject:(id)a0 toObjectOfClass:(Class)a1 outError:(id *)a2;

@end
