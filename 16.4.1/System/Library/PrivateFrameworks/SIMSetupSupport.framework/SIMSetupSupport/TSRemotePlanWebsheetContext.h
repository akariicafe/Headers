@class NSString, NSDictionary, CTXPCServiceSubscriptionContext;

@interface TSRemotePlanWebsheetContext : NSObject

@property (retain) NSString *carrierName;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property BOOL useLiveID;
@property (retain) NSString *iccid;
@property int flowType;
@property (retain) NSString *url;
@property (retain) NSDictionary *postdata;

- (id)init;
- (void).cxx_destruct;

@end
