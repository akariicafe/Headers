@class NSArray, NSString;

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest>

@property (readonly, nonatomic) NSArray *originalCharacteristics;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCharacteristics:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end
