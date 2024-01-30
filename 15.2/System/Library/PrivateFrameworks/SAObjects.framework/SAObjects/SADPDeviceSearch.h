@class NSArray;

@interface SADPDeviceSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *deviceSearchQueries;

+ (id)deviceSearch;
+ (id)deviceSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
