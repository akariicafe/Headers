@class NSString, NSDictionary;

@interface _ICQDeviceInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *wordsToReplace;
@property (retain, nonatomic) NSString *bundleId;

+ (void)getInfoWithBundleId:(id)a0 completion:(id /* block */)a1;
+ (id)defaultDeviceInfoWithBundleId:(id)a0;
+ (id)getInfoWithBundleId:(id)a0;
+ (id)templateKeyForPhotos:(unsigned long long)a0 video:(unsigned long long)a1;

- (void).cxx_destruct;

@end
