@class NSString;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsGroup : NSObject

@property (class, readonly, copy, nonatomic) NSString *groupName;

@property (weak, nonatomic) id<MOSettingsReader> settingsReader;
@property (weak, nonatomic) id<MOSettingsWriter> settingsWriter;

- (void)setValue:(id)a0 forSetting:(id)a1;
- (void).cxx_destruct;
- (id)valueForSetting:(id)a0;
- (id)_metadataForSetting:(id)a0;
- (id)initWithReader:(id)a0 writer:(id)a1;

@end
