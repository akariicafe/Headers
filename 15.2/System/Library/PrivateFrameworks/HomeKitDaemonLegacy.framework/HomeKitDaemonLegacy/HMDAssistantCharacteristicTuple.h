@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject

@property (readonly, nonatomic) NSString *attribute;
@property (readonly, nonatomic) SAHAAttributeValue *value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttribute:(id)a0 value:(id)a1;

@end
