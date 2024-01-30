@class NSString;

@interface NTKPhotoAssetScrubbingOperation : NSObject <NTKResourceDirectoryScrubbingOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)scrubAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;
- (id)supportedExtensions;

@end
