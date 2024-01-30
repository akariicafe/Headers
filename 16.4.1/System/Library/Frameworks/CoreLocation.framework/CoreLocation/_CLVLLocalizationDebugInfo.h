@class _CLVLLocalizationMaps488Details;

@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLVLLocalizationMaps488Details *maps488Details;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)initWithVLLocalizationDebugInfo:(id)a0;

@end
