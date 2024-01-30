@class NSString, SALocation;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *sourceType;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
