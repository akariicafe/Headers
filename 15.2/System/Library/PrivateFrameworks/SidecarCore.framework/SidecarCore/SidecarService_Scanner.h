@interface SidecarService_Scanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)localizedDescription;
- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)makeRequest;
- (id)localizedItemName;

@end
