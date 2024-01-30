@class NSString;

@interface VUIMPHomeShareMediaLibrary : VUIMPMediaLibrary <VUIHomeShareMediaLibrary>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enqueueKeepAliveWithCompletion:(id /* block */)a0;

@end
