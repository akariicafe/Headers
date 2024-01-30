@class NSOutputStream, NSString, EAAccessory, NSInputStream;

@interface EASession : NSObject {
    unsigned int _sessionID;
    BOOL _openCompleted;
    int _sock;
    BOOL _useSocketInterfaceForEASession;
    NSString *_eaSessionUUIDFromCoreAccessories;
}

@property (readonly, nonatomic) EAAccessory *accessory;
@property (readonly, nonatomic) NSString *protocolString;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;

- (unsigned int)_sessionID;
- (id)init;
- (void)dealloc;
- (id)_shortDescription;
- (id)description;
- (id)initWithAccessory:(id)a0 forProtocol:(id)a1;
- (void)_handleIncomingEAData:(id)a0;
- (id)EASessionUUID;
- (void)_streamClosed;
- (void)_endStreams;
- (BOOL)isOpenCompleted;
- (void)setOpenCompleted:(BOOL)a0;

@end
