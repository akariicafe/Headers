@class NSUUID, NSString, NSDictionary;
@protocol CATCancelable;

@interface CATIDSServiceConnectionInvitation : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, nonatomic) id<CATCancelable> assertion;
@property (readonly, copy, nonatomic) NSString *senderAppleID;
@property (readonly, copy, nonatomic) NSString *senderAddress;
@property (readonly, nonatomic) unsigned long long messagingVersion;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2 assertion:(id)a3 messagingVersion:(unsigned long long)a4 userInfo:(id)a5;
- (id)initWithSenderAppleID:(id)a0 senderAddress:(id)a1 assertion:(id)a2 messagingVersion:(unsigned long long)a3 userInfo:(id)a4;

@end
