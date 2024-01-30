@class PKFamilyMember, PKAccountUser;

@interface PKSharingIDSManagerHandlerDetails : NSObject

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) PKAccountUser *accountUser;

- (id)aliases;
- (id)primaryAppleID;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;
- (id)allHandles;
- (id)initWithFamilyMember:(id)a0 accountUser:(id)a1;

@end
