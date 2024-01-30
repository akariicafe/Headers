@class NSArray, VUIMediaAPIClient;

@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource

@property (retain, nonatomic) VUIMediaAPIClient *mediaClient;
@property (retain, nonatomic) NSArray *familyMembers;

- (id)init;
- (void).cxx_destruct;
- (void)_orderFamilyMembersByFirstName;
- (void)startFetch;

@end
