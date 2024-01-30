@class NSString, NSArray;

@interface RTWalletManagerNotificationPassUsed : RTNotification

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) NSArray *storeIDs;

- (void).cxx_destruct;
- (id)initWithPassTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;

@end
