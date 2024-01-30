@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)infoDictionary;
- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (struct __CFBundle { } *)cfBundle;
- (id)localizedInfoDictionary;
- (id)bundlePath;
- (id)description;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)executablePath;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)bundleIdentifier;
- (void)dealloc;

@end
