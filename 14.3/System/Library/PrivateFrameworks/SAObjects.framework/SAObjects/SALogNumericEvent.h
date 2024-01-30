@class NSString, NSNumber;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventOperation;
@property (copy, nonatomic) NSNumber *eventValue;

+ (id)logNumericEvent;
+ (id)logNumericEventWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
