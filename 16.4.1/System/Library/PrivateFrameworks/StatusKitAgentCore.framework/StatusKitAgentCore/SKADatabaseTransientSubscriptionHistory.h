@class NSString, NSDate;

@interface SKADatabaseTransientSubscriptionHistory : NSObject

@property (readonly, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSDate *lastSubscriptionDate;

- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)a0 lastSubscriptionDate:(id)a1;
- (id)initWithCoreDataTransientSubscriptionHistory:(id)a0;

@end
