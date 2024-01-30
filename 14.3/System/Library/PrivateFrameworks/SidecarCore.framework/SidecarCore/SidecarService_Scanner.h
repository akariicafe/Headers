@interface SidecarService_Scanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)localizedDescription;
- (id)serviceExtension;
- (id)makeRequest;
- (id)localizedItemName;

@end
