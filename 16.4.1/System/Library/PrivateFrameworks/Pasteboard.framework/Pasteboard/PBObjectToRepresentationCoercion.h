@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToRepresentationCoercion : NSObject

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *coercionBlockByType;
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder;

- (id)initWithClass:(Class)a0;
- (void).cxx_destruct;
- (void)addCoercionToType:(id)a0 block:(id /* block */)a1;
- (id)availableExportTypes;
- (BOOL)canCoerceToType:(id)a0;
- (void)createRepresentationOfType:(id)a0 fromObject:(id)a1 completionBlock:(id /* block */)a2;

@end
