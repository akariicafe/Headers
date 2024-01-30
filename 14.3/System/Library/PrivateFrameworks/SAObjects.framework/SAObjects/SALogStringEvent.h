@class NSString;

@interface SALogStringEvent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventValue;

+ (id)logStringEvent;
+ (id)logStringEventWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
