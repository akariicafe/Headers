@class NSUUID, NSString, NSArray, NSMutableDictionary, NSDictionary, GCReplayKitGestureSettings, NSMutableSet, NSUserDefaults, GCController;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface GCControllerSettings : NSObject <NSSecureCoding> {
    NSUserDefaults *_defaults;
    NSDictionary *_elementMappingKeyToElement;
    NSMutableDictionary *__elementMappingFromUserDefaults;
    NSArray *_customizedElementSettings;
    GCController *_controller;
    NSUUID *_customizedUUID;
    NSMutableDictionary *_elementSettings;
    BOOL _settingsAppOpenedAtLeastOnce;
    NSMutableSet *_observedKeyPaths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL customized;
@property (nonatomic) unsigned long long settingsID;
@property (readonly, nonatomic) id<NSCopying, NSObject, NSSecureCoding> uniqueIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *elementMappings;
@property (nonatomic) BOOL hapticsEnabled;
@property (nonatomic) BOOL screenShotEnabled;
@property (nonatomic) BOOL videoRecordingEnabled;
@property (nonatomic) BOOL customizationsEnabled;
@property (nonatomic) BOOL serialized;
@property (retain, nonatomic) NSString *screenShotKey;
@property (nonatomic) long long screenShotGesture;
@property (retain, nonatomic) NSString *videoRecordingKey;
@property (nonatomic) long long videoRecordingGesture;
@property (nonatomic) long long videoRecordingMode;
@property (copy, nonatomic) GCReplayKitGestureSettings *replayKitGestureSettings;
@property (readonly, nonatomic) NSDictionary *general_gameIntentMappings;
@property (copy, nonatomic) id /* block */ settingsChangedHandler;

+ (void)setSettingsExist:(BOOL)a0 forBundleIdentifier:(id)a1;
+ (void)setSettingsExist:(BOOL)a0 forController:(id)a1 forBundleIdentifier:(id)a2;
+ (id)metaDefaults;
+ (void)unregisterSettingsCustomizedHandlerForController:(id)a0 forKey:(id)a1;
+ (void)registerSettingsCustomizedHandler:(id /* block */)a0 forController:(id)a1 forKey:(id)a2;
+ (BOOL)settingsCustomizedForController:(id)a0 forBundleIdentifier:(id)a1;
+ (id)settingsDispatchQueue;
+ (void)unregisterSettingsCustomizedHandlerForKey:(id)a0;
+ (id)settingsCustomizedChangedHandlers;
+ (void)registerSettingsCustomizedHandler:(id /* block */)a0 forKey:(id)a1;
+ (id)controllerSettingsCustomizedChangedHandlers;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)defaultValues;
- (id)initWithBundleIdentifier:(id)a0 forControllerIdentifier:(id)a1;
- (void)_updateControllerReference:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 forController:(id)a1;
- (void)registerForSettingsCustomized;
- (void)initializeUserDefaults;
- (id)mappingKeyForElement:(id)a0;
- (void)unregisterForSettingsCustomized;
- (void)initializeElementMappings;
- (void)initializeReplayKitDefaultMappings;
- (void)saveBool:(BOOL)a0 forKey:(id)a1;
- (void)saveObject:(id)a0 forKey:(id)a1;
- (id)staticDefaultValues;
- (id)suiteNameForBundleIdentifier:(id)a0;
- (void)observeDefaultsKeyPaths:(id)a0;
- (void)populateElementSettings;
- (void)observeDefaultsKeyPath:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (id)mappingForElement:(id)a0;
- (void)deleteObjectForKey:(id)a0;
- (id)elementSettingForKey:(id)a0;
- (void)refreshSettingsExist;
- (id)initForController:(id)a0;
- (void)setGameIntentMappings:(id)a0;
- (id)mappingForButton:(id)a0;
- (id)mappingForDirectionPad:(id)a0;
- (id)mappingForTouchpad:(id)a0;
- (void)setMappingForElement:(id)a0 toElement:(id)a1;
- (id)settingsForElement:(id)a0;
- (void)eraseAllSettings;
- (void)restoreElementMappingToDefault;

@end
