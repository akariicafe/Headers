@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } path;
    struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } name; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } file; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } desc; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct MimeClassInfo *m_buffer; unsigned int m_capacity; unsigned int m_size; } mimes; BOOL isApplicationPlugin; unsigned char clientLoadPolicy; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } bundleIdentifier; } pluginInfo;
    struct RetainPtr<__CFBundle *> { void *m_ptr; } cfBundle;
    void /* function */ *BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)a0;

- (void)unload;
- (id)initWithPath:(id)a0;
- (id)MIMETypeForExtension:(const void *)a0;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleVersion;
- (void).cxx_destruct;
- (unsigned int)versionNumber;
- (const void *)path;
- (BOOL)load;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleIdentifier;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)isQuickTimePlugIn;
- (void)createPropertyListFile;
- (id)_objectForInfoDictionaryKey:(id)a0;
- (id)pListForPath:(id)a0 createFile:(BOOL)a1;
- (BOOL)getPluginInfoFromPLists;
- (const void *)pluginInfo;
- (BOOL)supportsExtension:(const void *)a0;
- (BOOL)supportsMIMEType:(const void *)a0;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)a0;
- (void)wasAddedToPluginDatabase:(id)a0;
- (void)wasRemovedFromPluginDatabase:(id)a0;

@end
