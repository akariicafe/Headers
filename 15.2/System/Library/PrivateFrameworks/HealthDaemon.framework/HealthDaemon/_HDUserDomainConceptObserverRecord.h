@class HKUserDomainConcept;

@interface _HDUserDomainConceptObserverRecord : NSObject

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) HKUserDomainConcept *userDomainConcept;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserDomainConcept:(id)a0 modificationType:(long long)a1;

@end
