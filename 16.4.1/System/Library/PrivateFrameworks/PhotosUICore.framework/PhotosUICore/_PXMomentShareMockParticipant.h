@class NSString;

@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant>

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *emailAddressString;
@property (readonly, nonatomic) NSString *phoneNumberString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
