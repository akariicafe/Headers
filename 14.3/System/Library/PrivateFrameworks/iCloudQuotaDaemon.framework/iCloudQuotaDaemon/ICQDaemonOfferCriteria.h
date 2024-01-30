@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (BOOL)isSatisfiedByConditions:(id)a0;

@end
