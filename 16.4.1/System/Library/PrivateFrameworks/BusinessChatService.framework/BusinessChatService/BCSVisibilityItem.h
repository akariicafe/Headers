@class NSString;

@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) double ratio;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 country:(id)a1 ratio:(double)a2;
- (id)initWithVisibility:(id)a0;
- (BOOL)isVisibleForDSID:(id)a0;

@end
