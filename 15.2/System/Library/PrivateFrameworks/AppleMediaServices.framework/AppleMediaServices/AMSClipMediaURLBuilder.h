@class NSString, NSNumber;
@protocol AMSBagProtocol;

@interface AMSClipMediaURLBuilder : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *externalVersionID;

- (id)_queryPromise;
- (id)_devicePlatform;
- (id)initWithBundleID:(id)a0 bag:(id)a1;
- (id)build;
- (void).cxx_destruct;
- (id)_hostPromise;
- (id)_pathPromise;

@end
