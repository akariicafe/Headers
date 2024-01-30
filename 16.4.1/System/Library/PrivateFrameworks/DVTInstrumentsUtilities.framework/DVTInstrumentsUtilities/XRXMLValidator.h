@class NSArray, NSURL, NSFileHandle, NSObject;
@protocol OS_os_log;

@interface XRXMLValidator : NSObject {
    NSURL *_url;
    NSURL *_schemaURL;
    NSArray *_errorReplacements;
    unsigned long long _errorsEmittedCount;
    BOOL _limitMessageEmitted;
}

@property (retain) NSFileHandle *errorFile;
@property (retain) NSFileHandle *diagnosticFile;
@property unsigned long long errorLimit;
@property (retain) NSObject<OS_os_log> *log;

- (BOOL)validate;
- (void).cxx_destruct;
- (id)findErrorMessageForErrorPtr:(struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } *)a0;
- (id)initWithSourceURL:(id)a0 schemaURL:(id)a1;

@end
