@class NSError, HMLightProfileSettings;

@interface HMHomeFetchLightProfileSettingsResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSError *error;
@property (readonly, copy) HMLightProfileSettings *settings;

- (id)initWithSettings:(id)a0;
- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
