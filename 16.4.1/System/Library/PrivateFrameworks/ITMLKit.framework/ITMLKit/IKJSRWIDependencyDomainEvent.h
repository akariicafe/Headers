@class NSString, NSArray, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain;
@property (readonly, nonatomic) NSArray *params;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_eventInterfaceStringForImplementation:(BOOL)a0;
- (id)eventImplementationStringWithSoftLinking:(BOOL)a0;
- (id)eventInterfaceString;
- (id)initWithEventDictionary:(id)a0 forDomain:(id)a1;
- (id)selectorString;

@end
