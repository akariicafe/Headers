@class NSString, LPImage;

@interface LPAssociatedApplicationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long clipAction;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
