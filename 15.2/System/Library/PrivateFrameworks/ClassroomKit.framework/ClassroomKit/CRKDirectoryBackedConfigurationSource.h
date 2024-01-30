@class NSString, NSURL, CRKFileBackedConfigurationSource;

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource> {
    NSURL *mDirectoryURL;
    CRKFileBackedConfigurationSource *mFileBackedSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDirectoryURL:(id)a0 fileName:(id)a1 callbackQueue:(id)a2;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)fileBackedConfigurationSource:(id)a0 didDeleteConfigurationAtURL:(id)a1 inDirectory:(id)a2;
- (id)initWithDirectoryURL:(id)a0 fileName:(id)a1;
- (BOOL)isDirectoryEmpty:(id)a0;

@end
