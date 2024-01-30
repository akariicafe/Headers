@class NSScanner;

@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}

@property (readonly, getter=isAtEnd) BOOL atEnd;

- (id)initWithString:(id)a0;
- (id)init;
- (id)description;
- (BOOL)scanLongLong:(long long *)a0;
- (void).cxx_destruct;
- (BOOL)scanString:(id *)a0;

@end
