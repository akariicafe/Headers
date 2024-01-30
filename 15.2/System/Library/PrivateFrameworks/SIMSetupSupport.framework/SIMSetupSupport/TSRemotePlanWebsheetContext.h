@class NSString, CTXPCServiceSubscriptionContext;

@interface TSRemotePlanWebsheetContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *carrierName;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property BOOL useLiveID;
@property (retain) NSString *iccid;
@property int flowType;


- (void).cxx_destruct;
- (id)init;

@end
