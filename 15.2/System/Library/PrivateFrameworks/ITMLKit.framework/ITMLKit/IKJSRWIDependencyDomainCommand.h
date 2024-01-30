@class NSString, NSArray, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainCommand : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain;
@property (readonly, nonatomic) NSArray *params;
@property (readonly, nonatomic) NSArray *returns;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)selectorString;
- (id)initWithCommandDictionary:(id)a0 forDomain:(id)a1;

@end
