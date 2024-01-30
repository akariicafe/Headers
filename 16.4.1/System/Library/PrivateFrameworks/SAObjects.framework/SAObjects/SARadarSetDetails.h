@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *classification;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *title;

+ (id)setDetails;
+ (id)setDetailsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
