@class NSData, NSString;

@interface CRSApplicationIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
