@class NSData, NSString;

@interface CRSApplicationIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
