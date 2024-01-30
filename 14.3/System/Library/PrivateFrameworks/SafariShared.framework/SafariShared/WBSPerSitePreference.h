@class NSString;

@interface WBSPerSitePreference : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
