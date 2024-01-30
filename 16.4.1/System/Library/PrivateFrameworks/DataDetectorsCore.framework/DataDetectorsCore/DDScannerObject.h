@class NSXPCConnection;

@interface DDScannerObject : NSObject {
    struct __DDScanner { } *_scanner;
    int _type;
    BOOL _hasBasicType;
    NSXPCConnection *_connectionToService;
}

@property (nonatomic) long long jobIdentifier;

- (id)scanString:(id)a0 range:(struct { long long x0; long long x1; })a1 query:(struct __DDScanQuery { } *)a2 configuration:(id)a3 completionBlock:(id /* block */)a4;
- (int)type;
- (BOOL)hasBasicType;
- (void)cancel;
- (void)dealloc;
- (id)initWithType:(int)a0 enableParsec:(BOOL)a1;
- (void).cxx_destruct;

@end
