@class NSString, NSMutableDictionary, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSMutableDictionary *_ubiquityRootPathToStack;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property (readonly, nonatomic) NSString *localPeerID;
@property (nonatomic) BOOL useLocalStorage;

- (void)dealloc;
- (id)initWithLocalPeerID:(id)a0 andUbiquityRootLocation:(id)a1;
- (id)storeExportContextForStoreName:(id)a0;
- (id)storeExportContextForStore:(id)a0;
- (id)description;

@end
