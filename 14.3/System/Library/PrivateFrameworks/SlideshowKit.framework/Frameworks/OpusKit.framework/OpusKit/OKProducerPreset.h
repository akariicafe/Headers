@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (id)pluginIdentifier;
- (BOOL)isLocal;
- (id)init;
- (BOOL)isAvailable;
- (id)family;
- (BOOL)isDefault;
- (void)dealloc;
- (id)localizedName;
- (id)uniqueIdentifier;
- (id)backgroundColor;
- (id)guidelines;
- (id)audioURLs;
- (BOOL)supportsSettingType:(unsigned long long)a0;
- (id)initWithFamily:(id)a0 name:(id)a1 andDictionary:(id)a2;
- (id)initWithFamily:(id)a0 andPluginIdentifier:(id)a1;
- (id)_settingKeyForType:(unsigned long long)a0;

@end
