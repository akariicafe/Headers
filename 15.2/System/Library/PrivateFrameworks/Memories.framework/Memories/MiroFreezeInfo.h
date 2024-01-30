@class NSData;

@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isFreeze;
@property (readonly, nonatomic) BOOL isRemoved;
@property (readonly, nonatomic) BOOL isAdded;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)freezeInfoWithData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
