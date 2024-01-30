@interface UPDataDetectors : NSObject

@property (readonly) struct UPDataDetector { long long x0; struct __DDScanner *x1; struct __DDScanner *x2; struct __DDScanner *x3; struct __DDScanner *x4; struct __DDScanner *x5; struct __DDScanner *x6; } *dataDetector;
@property (readonly) void *ddUsoMapper;

- (void)dealloc;
- (id)_matchSpansForDetectedDataArray:(struct __CFArray { } *)a0 label:(id)a1;
- (id)initLoadFromDataDetectorsDirectoryPath:(id)a0 forLocale:(id)a1;
- (id)matchSpans:(id)a0;
- (id)matchSpansForDetectedData:(id)a0;
- (id)matchSpansForUtterance:(id)a0;

@end
