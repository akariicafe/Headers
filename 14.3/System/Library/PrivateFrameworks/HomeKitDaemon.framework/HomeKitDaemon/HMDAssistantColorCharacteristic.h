@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject

@property (readonly, nonatomic) NSString *readCharacteristicType;
@property (readonly, nonatomic) NSString *writeCharacteristicType;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) BOOL mandatory;

- (void).cxx_destruct;
- (id)initWithReadCharacteristicType:(id)a0 writeCharacteristicType:(id)a1 format:(id)a2 mandatory:(BOOL)a3;

@end
