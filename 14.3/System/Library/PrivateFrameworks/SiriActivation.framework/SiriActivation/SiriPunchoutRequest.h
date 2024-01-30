@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) long long punchoutStyle;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
