@class NSString;

@interface DTFileBrowserService : DTXService <DTFileBrowserServiceAuthorizedAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (id)fileExistsAtPath:(id)a0;
- (id)entriesAtPath:(id)a0;
- (id)contentsOfDirectoryAtPath:(id)a0;
- (id)dataFromFileAtPath:(id)a0;
- (id)entriesInPathsArray:(id)a0;
- (id)updateAttributesForItem:(id)a0;

@end
