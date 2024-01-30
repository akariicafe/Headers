@class NSMutableDictionary;

@interface HRSSupportedFHIRConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *releasesTable;

+ (id)emetConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isSupportedFHIRResourceType:(id)a0 FHIRVersionString:(id)a1;
- (BOOL)isSupportedFHIRVersionString:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSupportedFHIRRelease:(id)a0;
- (BOOL)isSupportedFHIRResourceType:(id)a0 FHIRRelease:(id)a1;
- (BOOL)addSupportedFHIRRelease:(id)a0 error:(id *)a1;
- (id)supportedReleaseForFHIRRelease:(id)a0;

@end
