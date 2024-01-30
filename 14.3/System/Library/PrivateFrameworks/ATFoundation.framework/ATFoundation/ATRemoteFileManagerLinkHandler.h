@class NSString, NSFileManager;

@interface ATRemoteFileManagerLinkHandler : NSObject <ATMessageLinkRequestHandler> {
    NSFileManager *_fm;
}

@property (copy, nonatomic) NSString *rootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (id)_path:(id)a0;
- (id)_usage:(id)a0;
- (id)_createDirectory:(id)a0;
- (id)_directoryContents:(id)a0;
- (id)_uploadFile:(id)a0;
- (id)_downloadFile:(id)a0;
- (id)_moveItems:(id)a0;
- (id)_removeItems:(id)a0;
- (id)_copyItems:(id)a0;
- (id)_freeSpace:(id)a0;
- (id)_progress:(id)a0;
- (id)initWithRootPath:(id)a0;

@end
