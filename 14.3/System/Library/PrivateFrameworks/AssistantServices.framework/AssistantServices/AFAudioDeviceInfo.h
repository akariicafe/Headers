@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) BOOL isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 deviceUID:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
