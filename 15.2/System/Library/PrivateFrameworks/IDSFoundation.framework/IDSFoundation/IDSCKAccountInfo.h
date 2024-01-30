@interface IDSCKAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;

+ (Class)__class;
+ (id)alloc;

@end
