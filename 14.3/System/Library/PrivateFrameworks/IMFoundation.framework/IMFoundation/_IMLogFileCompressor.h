@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fileCopierDidStart:(id)a0;
- (void)fileCopierDidFinish:(id)a0;
- (void)compressPath:(id)a0 toPath:(id)a1;

@end
