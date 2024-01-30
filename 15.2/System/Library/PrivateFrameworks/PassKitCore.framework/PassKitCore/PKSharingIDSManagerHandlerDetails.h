@class PKFamilyMember, PKAccountUser;

@interface PKSharingIDSManagerHandlerDetails : NSObject

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) PKAccountUser *accountUser;

- (id)aliases;
- (id)initWithFamilyMember:(id)a0 accountUser:(id)a1;
- (id)allHandles;
- (id)description;
- (id)primaryAppleID;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;

@end
