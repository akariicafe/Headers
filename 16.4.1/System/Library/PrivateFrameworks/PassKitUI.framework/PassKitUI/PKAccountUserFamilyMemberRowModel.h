@class PKFamilyMember, PKAccountUser, NSString, UIImage, PKAccountUserCollection, PKFeatureApplication;

@interface PKAccountUserFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel>

@property (retain, nonatomic) PKAccountUser *accountUser;
@property (retain, nonatomic) PKFeatureApplication *invitation;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortedAccountUserFamilyMemberRowModelsForFamilyMemberCollection:(id)a0 account:(id)a1 accountUserCollection:(id)a2 invitations:(id)a3;

- (long long)accessoryType;
- (long long)cellStyle;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;

@end
