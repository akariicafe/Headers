@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter

@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (void).cxx_destruct;
- (id)request;
- (id)transfer;
- (unsigned long long)estimatedOutputSizeWithError:(id *)a0;
- (unsigned long long)_estimatedOutputSizeWithError:(id *)a0;
- (id)requestWithNetworkAccess:(BOOL)a0;

@end
