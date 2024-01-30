@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int creativeType;
@property (nonatomic) long long options;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *advertisingSection;
@property (retain, nonatomic) NSString *authenticationUserName;
@property (copy, nonatomic) NSSet *context;
@property (copy, nonatomic) NSString *adSpaceContextJSON;
@property (nonatomic) float containerWidth;
@property (nonatomic) float containerHeight;
@property (nonatomic) float reorientedContainerWidth;
@property (nonatomic) float reorientedContainerHeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
