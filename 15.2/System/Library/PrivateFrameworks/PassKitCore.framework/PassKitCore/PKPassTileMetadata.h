@class PKPassTileMetadataVehicleFunction, NSString;

@interface PKPassTileMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)_createMetadataForType:(long long)a0 identifier:(id)a1;
+ (id)_createDictionaryMapForDictionaries:(id)a0;
+ (id)_createWithDictionary:(id)a0 privateDictionaryMap:(id)a1 privateDictionary:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setupWithDictionary:(id)a0 privateDictionary:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
