@class NSData, IOSurface;

@interface CKContextImageSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IOSurface *ioSurface;
@property (retain, nonatomic) NSData *cameraIntrinsics;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long profile;

+ (id)imageSourceForUIImage:(id)a0;

- (id)initWithIOSurface:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithIOSurface:(id)a0 cameraIntrinsics:(id)a1;

@end
