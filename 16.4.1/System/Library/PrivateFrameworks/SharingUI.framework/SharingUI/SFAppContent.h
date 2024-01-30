@class AMSBag, NSString, NSArray, NSURL, LSApplicationProxy, NSError, NSDictionary, SFLaunchRequest, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SFAppContent : NSObject {
    AMSBag *_amsBag;
    struct CGImage **_appIcon;
    LSApplicationProxy *_appProxy;
    NSString *_appName;
    NSDictionary *_amsArtworkDict;
    NSString *_amsLaunchURL;
    NSError *_amsResultsError;
    int _amsResultsState;
    NSMutableArray *_infoFetchRequests;
    SFLaunchRequest *_launchRequest;
}

@property (retain, nonatomic) NSArray *adamIDs;
@property (retain, nonatomic) NSURL *amsURLOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) BOOL installed;

- (void).cxx_destruct;
- (id)_launchOptions;
- (void)_amsRun;
- (id)_amsAppNameFromResult:(id)a0;
- (id)_amsArtworkDictionaryFromResult:(id)a0;
- (void)_amsFetchAppResultsWithCompletion:(id /* block */)a0;
- (void)_amsFetchArtworkIfNeeded;
- (void)_amsFetchArtworkWithRequest:(id)a0;
- (void)_amsFetchResults;
- (id)_amsFirstResponseDataItemFromResult:(id)a0;
- (void)_amsLaunchIfNeeded;
- (id)_amsLaunchURLFromResult:(id)a0;
- (void)_fetchNameAndIconWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)_launchWithCompletion:(id /* block */)a0;
- (void)fetchNameAndIconWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)initWithAdamIDs:(id)a0;
- (void)launchWithCompletion:(id /* block */)a0;

@end
