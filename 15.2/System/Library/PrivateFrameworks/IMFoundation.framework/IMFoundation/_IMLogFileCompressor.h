@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (void)fileCopierDidStart:(id)a0;
- (void)fileCopierDidFinish:(id)a0;
- (void)compressPath:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
