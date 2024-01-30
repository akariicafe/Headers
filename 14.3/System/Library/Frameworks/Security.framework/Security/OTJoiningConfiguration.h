@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *protocolType;
@property (retain, nonatomic) NSString *uniqueDeviceID;
@property (retain, nonatomic) NSString *uniqueClientID;
@property (retain, nonatomic) NSString *containerName;
@property (retain, nonatomic) NSString *contextID;
@property (retain, nonatomic) NSString *pairingUUID;
@property (nonatomic) unsigned long long epoch;
@property (nonatomic) BOOL isInitiator;
@property long long timeout;

- (id)initWithProtocolType:(id)a0 uniqueDeviceID:(id)a1 uniqueClientID:(id)a2 pairingUUID:(id)a3 containerName:(id)a4 contextID:(id)a5 epoch:(unsigned long long)a6 isInitiator:(BOOL)a7;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
