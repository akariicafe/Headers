@class NSString;

@interface RMDeclarationKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *keyWithoutServerToken;
@property (readonly, copy, nonatomic) NSString *subscriberIdentifier;
@property (readonly, copy, nonatomic) NSString *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *declarationIdentifier;
@property (readonly, copy, nonatomic) NSString *declarationServerToken;

+ (id)newDeclarationKey:(id)a0;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 store:(id)a1 declaration:(id)a2;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3;
+ (void)synchronizeOldKeys:(id)a0 newKeys:(id)a1 returningUnchangedKeys:(id *)a2 returningNewAddKeys:(id *)a3 returningNewChangeKeys:(id *)a4 returningOldReplaceKeys:(id *)a5 returningOldRemoveKeys:(id *)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDeclarationKey:(id)a0;
- (id)initWithSubscriberIdentifier:(id)a0 store:(id)a1 declaration:(id)a2;
- (id)initWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3;

@end
