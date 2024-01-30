@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter

@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (id)transfer;
- (id)request;
- (void).cxx_destruct;
- (unsigned long long)estimatedOutputSizeWithError:(id *)a0;
- (unsigned long long)_estimatedOutputSizeWithError:(id *)a0;
- (id)requestWithNetworkAccess:(BOOL)a0;

@end
