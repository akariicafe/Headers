@class NSString, OKPresentation, NSMutableDictionary;

@interface OKPresentationCanvas : NSObject <OKPresentationCanvasSubclassingHooks, NSCopying> {
    id _parent;
}

@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) id parent;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSMutableDictionary *settings;
@property (readonly, copy, nonatomic) NSMutableDictionary *userSettings;
@property (readonly, copy, nonatomic) NSMutableDictionary *userData;
@property (copy, nonatomic) NSMutableDictionary *properties;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL isResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionary;
- (id)keyPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)a0;
- (void)setPropertiesObject:(id)a0 forKeyPath:(id)a1;
- (void)_setPropertiesObject:(id)a0 forKey:(id)a1;
- (void)_setSettingsObject:(id)a0 forKey:(id)a1;
- (void)_setUserDataObject:(id)a0 forKey:(id)a1;
- (void)addSettingsFromDictionary:(id)a0;
- (id)mergedSettings;
- (void)parentApplyValueForKeyPath:(id)a0;
- (void)setSettingsObject:(id)a0 forKeyPath:(id)a1;
- (void)setUserDataObject:(id)a0 forKeyPath:(id)a1;

@end
