@class NSString;
@protocol CNTCCSettings, CNUICoreRemoteApplicationIconFetching;

@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNTCCSettings> tccSettings;
@property (readonly, nonatomic) id<CNUICoreRemoteApplicationIconFetching> iconFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)a0;
- (id)records;
- (id)saveContactsAuthorizationModel:(id)a0;
- (id)contactsAuthorizationModel;
- (id)recordForBundleIdentifier:(id)a0;
- (id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
