@class NSString;

@interface IDSFamilyDevice : NSObject

@property (retain, nonatomic) NSString *ownerHandle;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *deviceUniqueID;

- (id)initWithOwnerHandle:(id)a0 deviceName:(id)a1 deviceType:(long long)a2 deviceColor:(id)a3 buildVersion:(id)a4 deviceUniqueID:(id)a5;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
