@class NSString, NSArray, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain;
@property (readonly, nonatomic) NSArray *params;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)selectorString;
- (id)_eventInterfaceStringForImplementation:(BOOL)a0;
- (id)initWithEventDictionary:(id)a0 forDomain:(id)a1;
- (id)eventInterfaceString;
- (id)eventImplementationStringWithSoftLinking:(BOOL)a0;

@end
