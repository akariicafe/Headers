@class NSString;

@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties

@property (copy, nonatomic) NSString *transport;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *layout;
@property (nonatomic) unsigned char countryCode;
@property (nonatomic) unsigned int standardType;
@property (nonatomic) long long subinterfaceID;
@property (nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol;

- (void)setTransport:(id)a0;
- (void)setLayout:(id)a0;
- (void)setCountryCode:(unsigned char)a0;
- (void)setLanguage:(id)a0;
- (void)setSubinterfaceID:(long long)a0;
- (void)setStandardType:(unsigned int)a0;
- (void)setCapsLockKeyHasLanguageSwitchLabel:(BOOL)a0;
- (void)setGlobeKeyLabelHasGlobeSymbol:(BOOL)a0;

@end
