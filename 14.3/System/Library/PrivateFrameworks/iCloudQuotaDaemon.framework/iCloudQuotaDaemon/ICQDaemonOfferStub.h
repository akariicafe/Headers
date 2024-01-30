@class NSString, NSDictionary, ICQDaemonOfferConditions, ICQDaemonOfferCriteria;

@interface ICQDaemonOfferStub : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSString *offerId;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic) ICQDaemonOfferCriteria *criteria;
@property (copy, nonatomic) ICQDaemonOfferConditions *conditionsWhenChosen;
@property (readonly, nonatomic) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;

@end
