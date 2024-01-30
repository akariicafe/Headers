@class NSArray, VUIMediaAPIClient;

@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource

@property (retain, nonatomic) VUIMediaAPIClient *mediaClient;
@property (retain, nonatomic) NSArray *familyMembers;

- (void).cxx_destruct;
- (id)init;
- (void)startFetch;
- (void)_orderFamilyMembersByFirstName;

@end
