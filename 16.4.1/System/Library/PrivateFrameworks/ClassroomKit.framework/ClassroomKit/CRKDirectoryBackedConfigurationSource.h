@class NSString, NSURL, CRKFileBackedConfigurationSource;

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource> {
    NSURL *mDirectoryURL;
    CRKFileBackedConfigurationSource *mFileBackedSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)fileBackedConfigurationSource:(id)a0 didDeleteConfigurationAtURL:(id)a1 inDirectory:(id)a2;
- (id)initWithDirectoryURL:(id)a0 fileName:(id)a1;
- (id)initWithDirectoryURL:(id)a0 fileName:(id)a1 callbackQueue:(id)a2;
- (BOOL)isDirectoryEmpty:(id)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
