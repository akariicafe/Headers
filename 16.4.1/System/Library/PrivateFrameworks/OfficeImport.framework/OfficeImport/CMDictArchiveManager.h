@class NSString, NSMutableDictionary, NSMutableString;

@interface CMDictArchiveManager : CMStylingArchiveManager {
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    BOOL mIsFrameset;
}

- (void).cxx_destruct;
- (id)name;
- (unsigned long long)resourceCount;
- (id)copyDictionaryWithSizeInfos:(BOOL)a0;
- (id)copyResourceWithName:(id)a0 type:(int)a1;
- (id)initWithName:(id)a0 resourcePathPrefix:(id)a1;
- (void)pushCssToPath:(id)a0;
- (void)pushData:(id)a0 toPath:(id)a1;
- (void)pushText:(id)a0 toPath:(id)a1;
- (id)resourceUrlProtocol;
- (void)setIsFrameset;

@end
