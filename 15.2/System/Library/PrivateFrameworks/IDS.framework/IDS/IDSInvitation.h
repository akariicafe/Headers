@class NSUUID, NSString, NSDate;
@protocol IDSInvitationContext;

@interface IDSInvitation : NSObject

@property (readonly, copy, nonatomic) NSUUID *uniqueID;
@property (readonly, copy, nonatomic) NSString *senderMergeID;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) id<IDSInvitationContext> context;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 expirationDate:(id)a1 uniqueID:(id)a2 context:(id)a3;

@end
