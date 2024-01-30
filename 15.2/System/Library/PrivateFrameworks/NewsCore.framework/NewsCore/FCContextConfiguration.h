@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isProductionContentEnvironment;
@property (readonly, nonatomic) BOOL isProductionPrivateDataEnvironment;
@property (readonly, copy, nonatomic) NSString *privateDataContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly, copy, nonatomic) NSString *contentContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier;

+ (id)defaultConfiguration;

- (id)initWithProductionContentEnvironment:(BOOL)a0 productionPrivateDataEnvironment:(BOOL)a1 contentContainerIdentifier:(id)a2 privateDataContainerIdentifier:(id)a3 privateDataSecureContainerIdentifier:(id)a4 storeFrontID:(id)a5 environment:(long long)a6;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEnvironment:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
