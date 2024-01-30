@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSDictionary *serverDictionary;

- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSatisfiedByConditions:(id)a0;

@end
