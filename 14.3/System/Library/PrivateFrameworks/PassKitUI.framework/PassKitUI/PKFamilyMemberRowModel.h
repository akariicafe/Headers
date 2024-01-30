@class PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentAccountInvitation, UIImage;

@interface PKFamilyMemberRowModel : NSObject

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentAccountInvitation *invitation;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) unsigned long long state;

+ (id)sortedRowsFromFamilyMembers:(id)a0 peerPaymentAccount:(id)a1;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithFamilyMember:(id)a0;
- (long long)accessoryType;

@end
