@class NSString, NSDictionary, NUIdentifier, NUAdjustment, NSArray, NSMutableDictionary;

@interface PIAdjustmentController : NSObject {
    NSMutableDictionary *_changes;
}

@property (readonly, nonatomic) NSDictionary *settings;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NUIdentifier *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NUAdjustment *adjustment;
@property (readonly, nonatomic) NSArray *inputKeys;
@property (readonly, nonatomic) NSArray *displayInputKeys;
@property (readonly, nonatomic) BOOL canBeEnabled;

+ (id)autoKey;
+ (id)enabledKey;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)_isDefault;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)settingForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAuto;
- (BOOL)isEqual:(id)a0 forKeys:(id)a1;
- (id)visualInputKeys;
- (id)_primitiveValueForKey:(id)a0;
- (void)_setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)autoKeysForPaste;
- (BOOL)canHaveAuto;
- (BOOL)hasAutoKeyInSchema;
- (BOOL)hasInputKey:(id)a0;
- (id)initWithAdjustment:(id)a0;
- (void)interpolateFromStart:(id)a0 toEnd:(id)a1 progress:(double)a2;
- (BOOL)isEqual:(id)a0 visualChangesOnly:(BOOL)a1;
- (BOOL)isEqualToAdjustmentController:(id)a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (void)pasteAdjustment:(id)a0 forMediaType:(long long)a1;
- (id)pasteKeysForMediaType:(long long)a0;
- (void)setFromAdjustment:(id)a0;
- (void)setIsAuto:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeFromInputKey:(id)a0 timescaleKey:(id)a1;
- (id)valuesForArrayInputKey:(id)a0;

@end
