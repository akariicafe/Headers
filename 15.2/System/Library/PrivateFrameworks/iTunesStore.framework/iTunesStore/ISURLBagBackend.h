@class SSDoubleLinkedList, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ISURLBagBackend : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *bagValuesDictionary;
@property (retain, nonatomic) SSDoubleLinkedList *bagValuesList;

+ (BOOL)_bagValue:(id)a0 equalsBagValue:(id)a1;

- (id)diagnostics;
- (id)description;
- (id)_bagValuesMapTableWithInitialValues:(id)a0;
- (id)valueForKey:(id)a0 forBagWithKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)deltaDictionaryRepresentationForBagWithKey:(id)a0;
- (void)removeBagValuesForBagWithKey:(id)a0;
- (id)_valueForKey:(id)a0 forBagValuesNode:(id)a1;
- (void)addBagValues:(id)a0 forBagWithKey:(id)a1;
- (id)dictionaryRepresentationForBagWithKey:(id)a0;

@end
