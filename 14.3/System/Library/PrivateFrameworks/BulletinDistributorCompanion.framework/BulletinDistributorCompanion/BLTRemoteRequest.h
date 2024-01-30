@class IDSProtobuf, NSString, PBCodable, NSNumber;

@interface BLTRemoteRequest : NSObject

@property (retain, nonatomic) IDSProtobuf *responseToRequest;
@property (retain, nonatomic) PBCodable *protobuf;
@property (nonatomic) unsigned short type;
@property (copy, nonatomic) id /* block */ didSend;
@property (retain, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) id /* block */ didQueue;
@property (copy, nonatomic) NSString *requestDescription;
@property (nonatomic) BOOL allowCloudDelivery;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) id /* block */ responseCompletion;
@property (nonatomic) BOOL nonWaking;

+ (id)remoteRequestWithProtobuf:(id)a0 type:(unsigned short)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProtobuf:(id)a0 type:(unsigned short)a1;

@end
