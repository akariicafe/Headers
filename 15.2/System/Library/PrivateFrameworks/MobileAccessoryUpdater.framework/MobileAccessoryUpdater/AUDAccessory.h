@class NSString;

@interface AUDAccessory : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *fwVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
