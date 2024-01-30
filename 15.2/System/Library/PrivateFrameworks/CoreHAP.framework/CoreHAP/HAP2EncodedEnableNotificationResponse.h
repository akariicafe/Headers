@class NSSet, NSArray, NSString;

@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse <HAP2EncodedEnableNotificationResponse> {
    NSSet *_valueResponses;
}

@property (readonly, nonatomic) NSSet *updatedValues;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNotificationResponses:(id)a0;
- (id)initWithNotificationResponses:(id)a0 updatedValues:(id)a1;

@end
