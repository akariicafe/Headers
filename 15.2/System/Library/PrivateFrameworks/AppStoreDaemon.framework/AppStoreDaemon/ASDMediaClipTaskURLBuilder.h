@class NSNumber, NSString;
@protocol AMSBagProtocol;

@interface ASDMediaClipTaskURLBuilder : NSObject {
    NSString *_bundleID;
    id<AMSBagProtocol> _bag;
}

@property (retain, nonatomic) NSNumber *externalVersionID;

- (id)_queryPromise;
- (id)_devicePlatform;
- (id)initWithBundleID:(id)a0 bag:(id)a1;
- (id)build;
- (void).cxx_destruct;
- (id)_hostPromise;
- (id)_pathPromise;

@end
