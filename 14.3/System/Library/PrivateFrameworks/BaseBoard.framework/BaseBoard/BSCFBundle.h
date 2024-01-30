@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)initWithPath:(id)a0;
- (id)executablePath;
- (id)infoDictionary;
- (id)bundlePath;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (struct __CFBundle { } *)cfBundle;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)localizedInfoDictionary;
- (id)description;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)bundleIdentifier;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;

@end
