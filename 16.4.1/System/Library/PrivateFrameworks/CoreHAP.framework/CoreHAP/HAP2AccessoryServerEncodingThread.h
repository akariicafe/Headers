@class NSString;

@interface HAP2AccessoryServerEncodingThread : HAP2LoggingObject <HAP2AccessoryServerEncoding> {
    NSString *_accessoryDescription;
}

@property (readonly, nonatomic) unsigned long long encodingFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_parseShortFormUUID:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)_parseCharacteristicMetadata:(id)a0 error:(id *)a1;
- (id)_parseCharacteristicResponsesWithBodyData:(id)a0 request:(id)a1 error:(id *)a2;
- (id)_parseCharacteristics:(id)a0 error:(id *)a1;
- (id)_parseServiceList:(id)a0 error:(id *)a1;
- (id)_parseTopLevelAttributeDatabaseFromData:(id)a0 error:(id *)a1;
- (id)decodeBodyData:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)encodeBodyValue:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (id)eventsForData:(id)a0 error:(id *)a1;
- (id)executeWriteRequestForCharacteristics:(id)a0 error:(id *)a1;
- (id)groupingsForReadRequestsForCharacteristics:(id)a0;
- (id)groupingsForWriteRequestsForCharacteristics:(id)a0;
- (id)initWithEncodingFeatures:(unsigned long long)a0 accessoryDescription:(id)a1;
- (id)notificationRequestsForCharacteristics:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (id)prepareWriteRequestForCharacteristics:(id)a0 ttl:(double)a1 error:(id *)a2;
- (id)readRequestForAttributeDatabaseWithEncryption:(BOOL)a0 error:(id *)a1;
- (id)readRequestForCharacteristics:(id)a0 shouldEncrypt:(BOOL)a1 error:(id *)a2;
- (id)requestToAddPairing:(id)a0 characteristic:(id)a1 error:(id *)a2;
- (id)requestToListPairingsWithCharacteristic:(id)a0 error:(id *)a1;
- (id)requestToRemovePairing:(id)a0 characteristic:(id)a1 error:(id *)a2;
- (id)responseForRequest:(id)a0 bodyData:(id)a1 error:(id *)a2;
- (id)unpairedIdentifyRequestWithError:(id *)a0;
- (id)writeRequestForCharacteristics:(id)a0 shouldEncrypt:(BOOL)a1 error:(id *)a2;

@end
