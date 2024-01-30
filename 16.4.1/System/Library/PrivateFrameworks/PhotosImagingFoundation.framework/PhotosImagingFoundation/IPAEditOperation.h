@class NSString;

@interface IPAEditOperation : NSObject <NSObject, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_identifierForUUIDMap;
+ (id)_mapDispatchQueue;
+ (id)_uuidForIdentifierMap;
+ (id)operationIdentifierForUUID:(id)a0;
+ (id)operationUUIDForIdentifier:(id)a0;
+ (id)presetifyAdjustment:(id)a0;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)UUID;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)autoIdentifier;
- (id)archivalRepresentation;
- (id)initWithSettingsDictionary:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;

@end
