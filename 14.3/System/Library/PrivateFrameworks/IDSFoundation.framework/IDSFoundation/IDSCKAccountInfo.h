@interface IDSCKAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;

+ (id)alloc;
+ (Class)__class;

@end
