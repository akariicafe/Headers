@class NSString, NSData, _NMROriginProtobuf;

@interface NMROriginInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMROriginProtobuf *_protobuf;
}

@property (nonatomic) int uniqueIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSData *deviceInfoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protobuf;
- (id)initWithProtobuf:(id)a0;
- (id)protobufData;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProtobufData:(id)a0;

@end
