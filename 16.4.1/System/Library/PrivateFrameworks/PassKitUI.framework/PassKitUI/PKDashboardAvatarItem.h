@class PKFamilyMember, PKAccountUser, NSString;

@interface PKDashboardAvatarItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKFamilyMember *familyMember;
@property (retain, nonatomic) PKAccountUser *accountUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
