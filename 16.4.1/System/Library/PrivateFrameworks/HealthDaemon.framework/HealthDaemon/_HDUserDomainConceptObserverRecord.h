@class HKUserDomainConcept;

@interface _HDUserDomainConceptObserverRecord : NSObject

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) HKUserDomainConcept *userDomainConcept;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDomainConcept:(id)a0 modificationType:(long long)a1;

@end
