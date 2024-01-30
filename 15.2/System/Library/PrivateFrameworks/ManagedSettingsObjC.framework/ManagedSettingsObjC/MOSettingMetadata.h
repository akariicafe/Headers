@interface MOSettingMetadata : NSObject

@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, retain, nonatomic) id defaultValue;

- (void).cxx_destruct;
- (id)initWithDefaultValue:(id)a0 isPublic:(BOOL)a1;
- (id)persistableValueFromValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)combinePersistableValue:(id)a0 with:(id)a1;

@end
