@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject

@property (readonly, copy, nonatomic) NSSet *classes;

- (id)valueWithError:(id *)a0;
- (void)setValue:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 classes:(id)a1;
- (void)registerDefaultValue:(id)a0;
- (id)initWithStore:(id)a0 key:(id)a1 classes:(id)a2;
- (BOOL)setValue:(id)a0 error:(id *)a1;
- (id)initWithDefaults:(id)a0 key:(id)a1 classes:(id)a2;

@end
