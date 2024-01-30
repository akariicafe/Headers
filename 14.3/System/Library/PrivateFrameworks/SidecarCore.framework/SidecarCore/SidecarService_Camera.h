@interface SidecarService_Camera : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)localizedDescription;
- (id)serviceExtension;
- (id)localizedItemName;
- (id)mutableRequestMessage;

@end
