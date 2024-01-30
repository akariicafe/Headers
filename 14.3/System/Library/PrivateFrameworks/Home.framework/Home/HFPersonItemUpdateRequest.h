@class HMHome, HMPersonManager, HMPerson;

@interface HFPersonItemUpdateRequest : NSObject

@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 personManager:(id)a1 home:(id)a2;
- (id)updateWithOptions:(id)a0;

@end
