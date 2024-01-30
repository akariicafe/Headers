@class NSString, NSData;
@protocol HAP2AccessoryServerTransportRequestEndpoint;

@interface HAP2AccessoryServerTransportRequest : HAP2LoggingObject {
    unsigned long long _identifier;
}

@property (readonly, nonatomic) id<HAP2AccessoryServerTransportRequestEndpoint> endpoint;
@property (readonly, nonatomic, getter=isForReading) BOOL forReading;
@property (readonly, nonatomic, getter=isForWriting) BOOL forWriting;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSData *data;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initForReadingWithEndpoint:(id)a0 data:(id)a1 encrypted:(BOOL)a2 mimeType:(id)a3;
- (id)initForWritingWithEndpoint:(id)a0 data:(id)a1 encrypted:(BOOL)a2 mimeType:(id)a3;

@end
