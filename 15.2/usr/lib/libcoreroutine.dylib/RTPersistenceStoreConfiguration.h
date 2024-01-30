@class NSString, RTPersistenceStore;

@interface RTPersistenceStoreConfiguration : NSObject

@property (readonly) NSString *name;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly, weak) RTPersistenceStore *store;

- (id)initWithName:(id)a0 readOnly:(BOOL)a1 store:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
