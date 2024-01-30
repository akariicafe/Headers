@class NSArray;

@interface SADPDeviceSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *deviceSearchQueries;

+ (id)deviceSearch;
+ (id)deviceSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
