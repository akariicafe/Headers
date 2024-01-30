@class NSString, PTSettings;

@interface PTDrillDownRow : PTSRow {
    PTSettings *_childSettings;
}

@property (readonly, nonatomic) NSString *childKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)rowWithTitle:(id)a0 childSettingsKeyPath:(id)a1;
+ (id)rowWithTitleKeyPath:(id)a0 childSettingsKeyPath:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)value;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)setSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithChildKeyPath:(id)a0;

@end
