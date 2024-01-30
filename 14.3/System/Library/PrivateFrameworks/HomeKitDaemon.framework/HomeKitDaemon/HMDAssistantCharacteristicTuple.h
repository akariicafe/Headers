@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject

@property (readonly, nonatomic) NSString *attribute;
@property (readonly, nonatomic) SAHAAttributeValue *value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 value:(id)a1;

@end
