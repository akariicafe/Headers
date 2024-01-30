@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent

@property (readonly, nonatomic) NSString *keychainItemAdded;

+ (id)eventFromLKLogEvent:(id)a0;

- (void).cxx_destruct;
- (id)dictionary;
- (void)setKeychainItemAdded:(id)a0;

@end
