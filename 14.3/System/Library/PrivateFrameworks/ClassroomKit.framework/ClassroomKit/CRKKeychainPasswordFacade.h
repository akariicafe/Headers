@class NSDictionary;

@interface CRKKeychainPasswordFacade : NSObject

@property (readonly, copy, nonatomic) NSDictionary *baseQueryAttributes;

- (void).cxx_destruct;
- (void)setPassword:(id)a0 forService:(id)a1 accessGroup:(id)a2;
- (id)passwordForService:(id)a0;
- (id)initWithBaseQueryAttributes:(id)a0;
- (BOOL)setPassword:(id)a0 forService:(id)a1 accessGroup:(id)a2 error:(id *)a3;
- (id)passwordForService:(id)a0 error:(id *)a1;
- (BOOL)removePasswordForService:(id)a0 error:(id *)a1;
- (id)makeQueryWithAttributes:(id)a0;
- (void)addAccessibilityAttributeToQuery:(id)a0;
- (id)errorForPasswordStatus:(int)a0;

@end
