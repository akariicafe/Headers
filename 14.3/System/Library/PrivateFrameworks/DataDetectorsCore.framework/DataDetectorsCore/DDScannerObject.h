@interface DDScannerObject : NSObject {
    struct __DDScanner { } *_scanner;
    int _type;
    BOOL _hasBasicType;
}

@property (nonatomic) long long jobIdentifier;

- (void)cancel;
- (void)dealloc;
- (id)initWithType:(int)a0 enableParsec:(BOOL)a1;
- (BOOL)hasBasicType;
- (id)scanString:(id)a0 range:(struct { long long x0; long long x1; })a1 query:(struct __DDScanQuery { } *)a2 configuration:(id)a3;
- (int)type;

@end
