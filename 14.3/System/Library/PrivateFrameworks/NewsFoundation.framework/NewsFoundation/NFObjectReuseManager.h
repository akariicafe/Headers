@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject

@property (copy, nonatomic) id /* block */ reuseFactory;
@property (copy, nonatomic) NSMutableDictionary *inuseObjects;
@property (copy, nonatomic) NSMutableDictionary *reuseableObjects;

- (void).cxx_destruct;
- (BOOL)isInUse:(id)a0;
- (id)initWithObjectConstructor:(id /* block */)a0;
- (id)dequeueObjectForIdentifier:(id)a0;
- (void)prepareObjectForReuse:(id)a0;
- (void)purgeObjectForIdentifier:(id)a0;
- (id)inUseObjectForIdentifier:(id)a0;

@end
