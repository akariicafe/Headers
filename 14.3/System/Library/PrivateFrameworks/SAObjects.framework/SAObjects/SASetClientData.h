@class NSNumber;

@interface SASetClientData : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;

+ (id)setClientData;
+ (id)setClientDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
