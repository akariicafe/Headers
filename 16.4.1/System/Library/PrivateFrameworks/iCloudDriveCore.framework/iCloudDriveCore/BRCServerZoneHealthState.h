@class BRFieldCKInfo;

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BRFieldCKInfo *ckInfo;
@property (readonly, nonatomic) int state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCKInfo:(id)a0 state:(int)a1;
- (id)initWithServerZoneHealthState:(id)a0;

@end
