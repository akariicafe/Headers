@class NSString;

@interface CRKDeviceGestalt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, copy, nonatomic) NSString *systemVersion;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatform:(unsigned long long)a0 systemVersion:(id)a1;

@end
