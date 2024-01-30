@interface FxMetaPlugWrapper : NSObject <FxMetaPlugWrapper>

- (Class)plugInClass;
- (id)plugInTypeUUID;
- (id)defaultFolderURLs;
- (id)fxMetaPlugsInFolderURLs:(id)a0 includingBuiltIns:(BOOL)a1;

@end
