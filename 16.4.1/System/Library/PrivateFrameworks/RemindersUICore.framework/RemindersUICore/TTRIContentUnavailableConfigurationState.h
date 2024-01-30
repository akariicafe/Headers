@class NSString, UITraitCollection;

@interface TTRIContentUnavailableConfigurationState : TTRIUIContentUnavailableShim <UIConfigurationState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *searchControllerText;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTraitCollection:(id)a0;
- (id)customStateForKey:(id)a0;
- (void)setCustomState:(id)a0 forKey:(id)a1;
- (id)traitCollection;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)asUIKit;

@end
