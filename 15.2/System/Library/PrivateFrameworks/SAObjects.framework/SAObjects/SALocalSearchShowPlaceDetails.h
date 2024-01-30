@interface SALocalSearchShowPlaceDetails : SABaseClientBoundCommand

@property (nonatomic) long long itemIndex;

+ (id)showPlaceDetails;
+ (id)showPlaceDetailsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
