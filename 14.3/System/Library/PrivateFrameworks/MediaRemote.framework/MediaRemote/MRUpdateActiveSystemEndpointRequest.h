@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic, getter=isPairedDeviceSync) BOOL pairedDeviceSync;
@property (readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *outputDeviceUID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long changeType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)perform:(id)a0 completion:(id /* block */)a1;
- (id)initWithOutputDeviceUID:(id)a0 reason:(id)a1;
- (id)initWithProtobuf:(id)a0;

@end
