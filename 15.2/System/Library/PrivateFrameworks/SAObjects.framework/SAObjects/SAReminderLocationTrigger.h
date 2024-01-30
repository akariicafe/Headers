@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (copy, nonatomic) NSURL *contactIdentifier;
@property (copy, nonatomic) NSString *internalGUID;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mobileSpace;
@property (copy, nonatomic) NSString *timing;

+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
