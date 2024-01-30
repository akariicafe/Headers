@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) BOOL isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *remoteDeviceUID;
@property (readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)xpcObject;
- (id)initWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3;
- (id)initWithAVVCRecordDeviceInfo:(id)a0;

@end
