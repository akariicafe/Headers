@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)initWithURL:(id)a0;
- (id)initWithPath:(id)a0;
- (id)executablePath;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)bundlePath;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (struct __CFBundle { } *)cfBundle;
- (id)infoDictionary;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)bundleIdentifier;
- (id)description;
- (id)localizedInfoDictionary;

@end
