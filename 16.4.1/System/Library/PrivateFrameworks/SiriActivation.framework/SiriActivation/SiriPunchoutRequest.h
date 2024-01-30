@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) long long punchoutStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
