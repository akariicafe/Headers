@class NSArray, NSString;

@interface HAP2EncodedCharacteristicRequestThread : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {
    BOOL _enforcePDUBodyLength;
    NSArray *_internalCharacteristics;
    unsigned long long _requestType;
}

@property (readonly, nonatomic) NSArray *btleRequests;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithBTLERequests:(id)a0 requestType:(unsigned long long)a1 enforcePDUBodyLength:(BOOL)a2;

@end
