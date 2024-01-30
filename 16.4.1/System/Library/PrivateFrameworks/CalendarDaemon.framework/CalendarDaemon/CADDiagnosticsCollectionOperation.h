@class NSString, NSMutableDictionary, ClientConnection, NSMutableSet, NSURL, NSDateFormatter;

@interface CADDiagnosticsCollectionOperation : NSOperation <CADDiagnosticLogCollector, CADDiagnosticLogContext> {
    ClientConnection *_conn;
    long long _options;
    int _batchDepth;
    NSMutableDictionary *_files;
    NSMutableSet *_changedFiles;
    BOOL _finished;
    NSMutableSet *_temporaryFileNames;
    NSURL *_logDirectoryURL;
    NSURL *_incomingLogDirectoryURL;
    NSURL *_completedLogDirectoryURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_logFile;
    NSURL *_logFileURL;
    NSDateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) unsigned int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canceled;
@property (readonly, nonatomic) BOOL redactLogs;

- (void)log:(id)a0;
- (void)finish;
- (void)main;
- (void)logError:(id)a0;
- (void)batch:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reportFileStatusChangesToClient;
- (id)_createLogDirectory;
- (id)_createLogFile;
- (id)_randomString;
- (void)collect:(id)a0;
- (void)deleteTemporaryFile:(id)a0;
- (void)determineExpectedOutputFiles:(id)a0;
- (id)finalFileForFile:(id)a0;
- (id)initWithConnection:(id)a0 token:(unsigned int)a1 options:(long long)a2;
- (id)loadLogCollectors;
- (void)logWithLevel:(unsigned char)a0 formatString:(id)a1 arguments:(char *)a2;
- (void)setStatus:(unsigned long long)a0 forFile:(id)a1;
- (id)temporaryFileForName:(id)a0;

@end
