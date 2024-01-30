@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (BOOL)isDefault;
- (BOOL)isAvailable;
- (id)localizedName;
- (id)backgroundColor;
- (id)family;
- (void)dealloc;
- (id)pluginIdentifier;
- (id)init;
- (BOOL)isLocal;
- (id)uniqueIdentifier;
- (id)audioURLs;
- (id)guidelines;
- (BOOL)supportsSettingType:(unsigned long long)a0;
- (id)_settingKeyForType:(unsigned long long)a0;
- (id)initWithFamily:(id)a0 andPluginIdentifier:(id)a1;
- (id)initWithFamily:(id)a0 name:(id)a1 andDictionary:(id)a2;

@end
