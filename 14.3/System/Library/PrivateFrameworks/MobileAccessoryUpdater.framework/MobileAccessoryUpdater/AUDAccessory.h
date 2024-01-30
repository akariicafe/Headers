@class NSString;

@interface AUDAccessory : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *fwVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUID:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
