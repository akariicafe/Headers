@class NSArray, NSString;

@interface HAP2EncodedCharacteristicResponse : HAP2LoggingObject <HAP2EncodedCharacteristicResponse> {
    NSArray *_responses;
}

@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCharacteristics:(id)a0;
- (void).cxx_destruct;

@end
