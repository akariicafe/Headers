@class NSString, NSDate;

@interface TransientSubscriptionHistory : NSManagedObject

@property (class, readonly, nonatomic) NSString *lastSubscriptionDateKeyPath;
@property (class, readonly, nonatomic) NSString *channelIdentifierKeyPath;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSDate *lastSubscriptionDate;

+ (id)fetchRequest;
+ (id)predicateForChannelIdentifier:(id)a0;
+ (id)predicateForLastSubscriptionDate:(id)a0;
+ (id)sortDescriptorForLastSubscriptionDateAscending:(BOOL)a0;

@end
