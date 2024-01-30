@class NSString, NSDictionary, PXSettings;

@interface PXSettingsConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PXSettings *settings;
@property (readonly, nonatomic) NSDictionary *archive;

+ (id)configurationsFromSharableString:(id)a0;
+ (id)sharableStringForConfigurations:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithUpdatedSettingsValues;
- (id)initWithName:(id)a0 settings:(id)a1;
- (id)initWithName:(id)a0 settings:(id)a1 archive:(id)a2;

@end
