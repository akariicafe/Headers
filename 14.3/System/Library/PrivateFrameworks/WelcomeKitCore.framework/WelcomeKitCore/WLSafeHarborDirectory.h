@class NSString;

@interface WLSafeHarborDirectory : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *infoPath;
@property (copy, nonatomic) NSString *androidContentPath;

- (void).cxx_destruct;

@end
