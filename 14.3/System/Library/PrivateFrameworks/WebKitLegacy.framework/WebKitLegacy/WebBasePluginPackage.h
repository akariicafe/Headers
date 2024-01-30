@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } path;
    struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } name; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } file; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } desc; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct MimeClassInfo *m_buffer; unsigned int m_capacity; unsigned int m_size; } mimes; BOOL isApplicationPlugin; unsigned char clientLoadPolicy; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } bundleIdentifier; } pluginInfo;
    struct RetainPtr<__CFBundle *> { void *m_ptr; } cfBundle;
    void /* function */ *BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; })bundleVersion;
- (BOOL)load;
- (const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)path;
- (void).cxx_destruct;
- (id)MIMETypeForExtension:(const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)a0;
- (void)dealloc;
- (BOOL)isQuickTimePlugIn;
- (unsigned int)versionNumber;
- (void)unload;
- (id).cxx_construct;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; })bundleIdentifier;
- (void)createPropertyListFile;
- (id)_objectForInfoDictionaryKey:(id)a0;
- (id)pListForPath:(id)a0 createFile:(BOOL)a1;
- (BOOL)getPluginInfoFromPLists;
- (const struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct MimeClassInfo *x0; unsigned int x1; unsigned int x2; } x3; BOOL x4; unsigned char x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x6; } *)pluginInfo;
- (BOOL)supportsExtension:(const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)a0;
- (BOOL)supportsMIMEType:(const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)a0;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)a0;
- (void)wasAddedToPluginDatabase:(id)a0;
- (void)wasRemovedFromPluginDatabase:(id)a0;

@end
