@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject {
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;

- (void)fileCopierDidStart:(id)a0;
- (void)fileCopierDidFinish:(id)a0;
- (void)compressFileTransfer:(id)a0 completionBlock:(id /* block */)a1;
- (void)_mapCopier:(id)a0 toBlock:(id /* block */)a1;
- (id /* block */)_blockForCopier:(id)a0;
- (void)_unmapCopier:(id)a0;

@end
