@class NSDecimalNumber, NSString, NSMutableDictionary;

@interface PKNumericSuggestionLastInput : NSObject {
    NSString *_serialNumber;
    NSMutableDictionary *_passLastInputDictionary;
}

@property (copy, nonatomic) NSDecimalNumber *value;
@property (nonatomic) BOOL wentToMax;

- (id)init;
- (void).cxx_destruct;
- (void)save;
- (id)initWithPassSerialNumber:(id)a0;

@end
