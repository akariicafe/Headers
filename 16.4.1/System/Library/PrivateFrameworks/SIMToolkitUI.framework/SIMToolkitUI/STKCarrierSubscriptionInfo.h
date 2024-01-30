@class NSArray, STKUSSDFilter;

@interface STKCarrierSubscriptionInfo : NSObject

@property (readonly, nonatomic) BOOL canShowClass0SMSOverInCallAlerts;
@property (readonly, nonatomic) BOOL showClass0SMSFromField;
@property (readonly, nonatomic) NSArray *ussdAlwaysFilteredPatterns;
@property (readonly, nonatomic) NSArray *ussdSometimesFilteredPatterns;
@property (readonly, nonatomic) STKUSSDFilter *ussdFilter;

- (void).cxx_destruct;
- (id)initWithShowClass0SMSFromField:(BOOL)a0 canShowClass0SMSOverInCallAlerts:(BOOL)a1 ussdAlwaysFilteredPatterns:(id)a2 ussdSometimesFilteredPatterns:(id)a3;

@end
