@class NSString, NSObject;
@protocol CRKKeyObjectStoring;

@interface CRKUserDefaultsObject : NSObject

@property (readonly, nonatomic) NSObject<CRKKeyObjectStoring> *store;
@property (readonly, copy, nonatomic) NSString *key;
@property (copy) id value;

- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0 key:(id)a1;
- (id)initWithKey:(id)a0;
- (id)initWithStore:(id)a0 key:(id)a1;
- (void)registerDefaultValue:(id)a0;

@end
