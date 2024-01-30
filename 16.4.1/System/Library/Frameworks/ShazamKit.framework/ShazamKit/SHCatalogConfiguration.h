@class NSString, SHRange;

@interface SHCatalogConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *installationID;
@property (retain, nonatomic) SHRange *signatureDurationRange;
@property (nonatomic) double streamingBufferDuration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
