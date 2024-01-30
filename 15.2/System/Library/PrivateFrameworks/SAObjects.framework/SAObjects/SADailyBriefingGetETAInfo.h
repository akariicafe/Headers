@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
