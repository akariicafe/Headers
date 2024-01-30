@class NSString;

@interface PKPassTileAccessoryButton : PKPassTileAccessory

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isSpinnerEnabled) BOOL spinnerEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)createWithTitle:(id)a0 spinnerEnabled:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
