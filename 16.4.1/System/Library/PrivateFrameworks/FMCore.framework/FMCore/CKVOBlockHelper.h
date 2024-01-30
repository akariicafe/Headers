@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject

@property (readonly, weak, nonatomic) id observedObject;
@property (readonly, nonatomic) NSMutableDictionary *tokensByContext;
@property (nonatomic) long long nextIdentifier;

- (void)dump;
- (id)initWithObject:(id)a0;
- (void)removeHandlerForKey:(id)a0;
- (id)insertNewTokenForKeyPath:(id)a0 block:(id /* block */)a1;
- (id)debugDescription;
- (id)allKVOObservers;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
