@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (id)family;
- (BOOL)isLocal;
- (id)localizedName;
- (BOOL)isDefault;
- (id)uniqueIdentifier;
- (id)backgroundColor;
- (id)pluginIdentifier;
- (id)init;
- (void)dealloc;
- (id)audioURLs;
- (BOOL)isAvailable;
- (id)guidelines;
- (BOOL)supportsSettingType:(unsigned long long)a0;
- (id)initWithFamily:(id)a0 name:(id)a1 andDictionary:(id)a2;
- (id)initWithFamily:(id)a0 andPluginIdentifier:(id)a1;
- (id)_settingKeyForType:(unsigned long long)a0;

@end
