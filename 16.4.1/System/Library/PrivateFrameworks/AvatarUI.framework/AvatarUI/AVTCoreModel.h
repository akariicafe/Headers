@class NSArray, AVTAvatarEditorColorDefaultsProvider, AVTEditingModelColors;

@interface AVTCoreModel : NSObject

@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, copy, nonatomic) AVTEditingModelColors *colors;
@property (readonly, copy, nonatomic) AVTAvatarEditorColorDefaultsProvider *colorDefaultsProvider;
@property (readonly, nonatomic) unsigned long long platform;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGroups:(id)a0 colors:(id)a1 colorDefaultsProvider:(id)a2 forPlatform:(unsigned long long)a3;

@end
