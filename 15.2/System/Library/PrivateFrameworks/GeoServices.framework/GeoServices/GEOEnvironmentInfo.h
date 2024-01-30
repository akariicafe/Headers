@class NSString, NSProgress, GEOResourceManifestDownload, NSError, NSData, NSDictionary;

@interface GEOEnvironmentInfo : NSObject {
    NSData *_manifestData;
    NSDictionary *_originalDictionaryRepresentation;
}

@property (readonly, nonatomic) NSError *lastLoadingError;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *releaseName;
@property (readonly, nonatomic) NSString *actualName;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSProgress *activationProgress;
@property (readonly, nonatomic) GEOResourceManifestDownload *resourceManifest;

- (BOOL)isActive;
- (void).cxx_destruct;
- (void)makeActive;
- (id)serviceURLs;
- (void)reloadManifestDataWithCompletionHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (id)urlDictionary;
- (void)_performActivation;
- (id)_manifestURLString;
- (void)updateWithURLs:(id)a0;
- (id)overrideURLs;
- (id)useProxyAuth;

@end
