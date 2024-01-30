@class NSArray, NSString, AXSBQuickSettingsData;

@interface VOSSettingsItem : NSObject

@property (class, readonly, nonatomic) VOSSettingsItem *Sounds;
@property (class, readonly, nonatomic) VOSSettingsItem *AudioDucking;
@property (class, readonly, nonatomic) VOSSettingsItem *Volume;
@property (class, readonly, nonatomic) VOSSettingsItem *Pitch;
@property (class, readonly, nonatomic) VOSSettingsItem *PhoneticFeedback;
@property (class, readonly, nonatomic) VOSSettingsItem *SendToHDMI;
@property (class, readonly, nonatomic) VOSSettingsItem *SpeakNotifications;
@property (class, readonly, nonatomic) VOSSettingsItem *SpeakingRate;
@property (class, readonly, nonatomic) VOSSettingsItem *Language;
@property (class, readonly, nonatomic) VOSSettingsItem *Hints;
@property (class, readonly, nonatomic) VOSSettingsItem *MediaDescriptions;
@property (class, readonly, nonatomic) VOSSettingsItem *RotorActionConfirmation;
@property (class, readonly, nonatomic) VOSSettingsItem *Activities;
@property (class, readonly, nonatomic) VOSSettingsItem *Punctuation;
@property (class, readonly, nonatomic) VOSSettingsItem *ScreenRecognition;
@property (class, readonly, nonatomic) VOSSettingsItem *ImageDescriptions;
@property (class, readonly, nonatomic) VOSSettingsItem *DirectTouch;
@property (class, readonly, nonatomic) VOSSettingsItem *NavigationStyle;
@property (class, readonly, nonatomic) VOSSettingsItem *NavigateImages;
@property (class, readonly, nonatomic) VOSSettingsItem *GestureDirection;
@property (class, readonly, nonatomic) VOSSettingsItem *TypingStyle;
@property (class, readonly, nonatomic) VOSSettingsItem *SoftwareTypingFeedback;
@property (class, readonly, nonatomic) VOSSettingsItem *HardwareTypingFeedback;
@property (class, readonly, nonatomic) VOSSettingsItem *SlideToType;
@property (class, readonly, nonatomic) VOSSettingsItem *CaptionPanel;
@property (class, readonly, nonatomic) VOSSettingsItem *LargeCursor;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleTables;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleAlerts;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleFormatting;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleAutoAdvanceDuration;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleOutput;
@property (class, readonly, nonatomic) VOSSettingsItem *BrailleInput;
@property (class, readonly, nonatomic) NSArray *allSettingsItems;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *localizedName;
@property (retain, nonatomic) AXSBQuickSettingsData *settingsData;

+ (id)settingsIDtoItemMap:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 itemType:(long long)a1;

@end
