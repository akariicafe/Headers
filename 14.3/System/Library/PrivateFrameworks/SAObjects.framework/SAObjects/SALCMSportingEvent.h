@class NSURL;

@interface SALCMSportingEvent : SALCMContent

@property (copy, nonatomic) NSURL *sportingEventId;

+ (id)sportingEvent;
+ (id)sportingEventWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
