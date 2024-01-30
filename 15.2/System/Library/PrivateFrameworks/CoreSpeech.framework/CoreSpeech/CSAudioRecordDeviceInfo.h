@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *remoteDeviceUIDString;
@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) BOOL isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *remoteDeviceUID;
@property (readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)description;
- (id)xpcObject;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3 remoteDeviceUIDString:(id)a4;
- (id)initWithAVVCRecordDeviceInfo:(id)a0;

@end
