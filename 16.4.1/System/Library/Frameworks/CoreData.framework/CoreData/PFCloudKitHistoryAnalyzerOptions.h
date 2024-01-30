@class NSCloudKitMirroringRequest;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    BOOL _includePrivateTransactions;
    NSCloudKitMirroringRequest *_request;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
