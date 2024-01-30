@class AMSBag, NSString, AMSMediaTask;

@interface WFMediaSessionManager : NSObject

@property (readonly, nonatomic) AMSMediaTask *task;
@property (readonly, nonatomic) AMSBag *bag;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 clientVersion:(id)a1;
- (void)lookupMediaType:(long long)a0 withIdentifiers:(id)a1 withCompletion:(id /* block */)a2;

@end
