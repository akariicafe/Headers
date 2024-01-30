@class NSArray;

@interface CKJSONLDGraph : NSObject {
    void /* unknown type, empty encoding */ _entities;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) NSArray *entities;

- (id)initWithEntities:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)linkedDataWithCompletionHandler:(id /* block */)a0;

@end
