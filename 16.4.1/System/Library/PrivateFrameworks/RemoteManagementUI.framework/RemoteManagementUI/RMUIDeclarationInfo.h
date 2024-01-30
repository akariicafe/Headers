@class NSString, RMModelDeclarationBase;

@interface RMUIDeclarationInfo : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isRequired;
@property (retain, nonatomic) RMModelDeclarationBase *declaration;
@property (copy, nonatomic) NSString *profileIdentifier;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 isRequired:(BOOL)a1 isActive:(BOOL)a2 declaration:(id)a3 profileIdentifier:(id)a4;

@end
