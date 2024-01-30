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

- (id)records;
- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)saveContactsAuthorizationModel:(id)a0;
- (id)contactsAuthorizationModel;
- (id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)a0;
- (id)recordForBundleIdentifier:(id)a0;

@end
