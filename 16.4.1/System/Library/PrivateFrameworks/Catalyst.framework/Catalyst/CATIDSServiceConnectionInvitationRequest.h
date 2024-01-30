@class NSUUID, NSString, NSDictionary;
@protocol CATCancelable;

@interface CATIDSServiceConnectionInvitationRequest : NSObject

@property (readonly, nonatomic) NSUUID *invitationIdentifier;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) id<CATCancelable> assertion;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithInvitationIdentifier:(id)a0 appleID:(id)a1 assertion:(id)a2 userInfo:(id)a3;

@end
