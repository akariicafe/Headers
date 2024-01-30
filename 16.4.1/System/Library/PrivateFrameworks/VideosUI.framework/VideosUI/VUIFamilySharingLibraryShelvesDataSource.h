@class NSString, VUIFamilyMember, NSMutableSet;

@interface VUIFamilySharingLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate>

@property (retain, nonatomic) VUIFamilyMember *familyMember;
@property (retain, nonatomic) NSMutableSet *fetchedDataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_dataSourceForShelves;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)initWithValidShelfTypes:(id)a0 withFamilyMember:(id)a1;
- (void)startFetch;

@end
