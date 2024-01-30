@class NSString, NSURL, NSData;

@interface STAppInfo : NSObject

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) short platform;
@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy) NSData *artworkData;

- (void).cxx_destruct;
- (id)description;

@end
