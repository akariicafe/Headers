@class NSArray;

@interface PRSPosterUpdateComplicationPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *complications;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComplications:(id)a0;
- (id)rawValue;
- (void).cxx_destruct;

@end
