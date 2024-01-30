@class NSString;

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long style;
@property (nonatomic) long long initatorStyle;
@property (copy, nonatomic) NSString *routingContextUID;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (nonatomic) BOOL shouldPreventAutorotation;
@property (nonatomic) BOOL allowsNowPlayingApplicationLaunch;
@property (nonatomic) BOOL sortByIsVideoRoute;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (copy, nonatomic) NSString *routeUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
