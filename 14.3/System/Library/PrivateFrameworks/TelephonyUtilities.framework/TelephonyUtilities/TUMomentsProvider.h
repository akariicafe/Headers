@class NSString, NSDictionary;

@interface TUMomentsProvider : NSObject

@property (readonly, nonatomic) long long streamToken;
@property (readonly, copy, nonatomic) NSString *requesterID;
@property (readonly, copy, nonatomic) NSDictionary *remoteIDSDestinations;
@property (readonly, nonatomic, getter=isRemoteMomentsAvailable) BOOL remoteMomentsAvailable;

- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;
- (id)initWithCall:(id)a0;
- (BOOL)isEqualToProvider:(id)a0;

@end
