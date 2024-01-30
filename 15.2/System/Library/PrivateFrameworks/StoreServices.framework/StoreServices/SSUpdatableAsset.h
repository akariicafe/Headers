@class NSURL, NSString;

@interface SSUpdatableAsset : NSObject

@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL;
@property (copy, nonatomic, setter=_setMD5:) NSString *md5;
@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL;
@property (copy, nonatomic, setter=_setVersion:) NSString *version;

- (void).cxx_destruct;

@end
