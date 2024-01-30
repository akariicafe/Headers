@class NSDictionary;

@interface NTKResourceDirectoryScrubber : NSObject {
    NSDictionary *_operationsMaps;
}

- (void).cxx_destruct;
- (id)initWithOperations:(id)a0;
- (BOOL)_scrubAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;
- (BOOL)scrubDirectoryAtPath:(id)a0 toDestinationPath:(id)a1 error:(id *)a2;

@end
