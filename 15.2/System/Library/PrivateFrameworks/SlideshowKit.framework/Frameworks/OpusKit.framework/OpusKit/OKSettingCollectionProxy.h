@class NSString;

@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport> {
    id _listOfObjects;
    id /* block */ _keyResolverBlock;
    NSString *_keyPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)initWithObjects:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithObjects:(id)a0 withKeyPath:(id)a1;

@end
