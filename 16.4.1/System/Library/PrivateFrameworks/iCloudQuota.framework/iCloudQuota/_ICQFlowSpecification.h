@class _ICQPageSpecification, NSDictionary, _ICQAlertSpecification;

@interface _ICQFlowSpecification : NSObject

@property (readonly, nonatomic) _ICQPageSpecification *startPage;
@property (readonly, nonatomic) NSDictionary *pagesByIdentifier;
@property (retain, nonatomic) _ICQAlertSpecification *startAlert;

- (void).cxx_destruct;
- (id)initWithPages:(id)a0;

@end
