@class NSString;

@interface HAP2EncodedEmptyRequestThread : HAP2LoggingObject <HAP2EncodedRequest>

@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (id)body;
- (id)initWithRequestType:(unsigned long long)a0;

@end
