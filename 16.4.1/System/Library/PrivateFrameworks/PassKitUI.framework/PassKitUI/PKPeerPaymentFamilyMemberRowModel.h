@class PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentAccountInvitation, UIImage, NSString;

@interface PKPeerPaymentFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel>

@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentAccountInvitation *invitation;
@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortedPeerPaymentFamilyMemberRowModelsForFamilyMembers:(id)a0 peerPaymentAccount:(id)a1;

- (long long)accessoryType;
- (long long)cellStyle;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;

@end
