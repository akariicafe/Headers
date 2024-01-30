@class NSMutableDictionary, NSString, NSDictionary, NSDateFormatter, NSMutableData, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BioLog : NSObject {
    BOOL _internal;
    NSString *_rootPath;
    NSString *_logPath;
    unsigned short _sequenceNumber;
    unsigned char _sequenceType;
    NSString *_sequencePath;
    NSString *_logContextBasePath;
    NSDictionary *_fileAttributes;
    NSDictionary *_fileAttributesProtected;
    NSDictionary *_fileAttributesAutoUpload;
    NSDateFormatter *_fileNameFormatter;
    NSDateFormatter *_milisecondsFormatter;
    NSObject<OS_dispatch_queue> *_retentionQueue;
    unsigned long long _retentionNewItemsSize;
    NSMutableData *_cropFrameBuffer;
    NSObject<OS_dispatch_semaphore> *_cropFrameBufferSemaphore;
    NSMutableArray *_scoreDataArray;
    unsigned short _computedSequenceNumberPair[2];
    unsigned short _lastComputedSequenceNumber;
    NSMutableDictionary *_allVsAllScoreDict;
    NSMutableArray *_allVsAllLogFileArray;
}

+ (void)initialize;
+ (void)cancelDiagnosticLogsRemoval;
+ (void)removeDiagnosticLogs;
+ (void)scheduleDiagnosticLogsRemoval;
+ (void)removeDiagnosticLogsImmediately;

- (void)logCameraFrame:(struct { struct { unsigned long long x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x6; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; struct { unsigned short x0; unsigned char x1; char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; } x5; unsigned char x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned char x12; unsigned char x13; } *)a0 sensorRawData:(id)a1 metaData:(id)a2;
- (void)logTemplate:(id)a0 withSequenceNumber:(unsigned short)a1 date:(id)a2 index:(unsigned char)a3 toPath:(id)a4 isPO:(BOOL)a5;
- (BOOL)isInternal;
- (void)logFrameDebug:(id)a0 withBuffer:(id)a1;
- (void)scheduleRetentionPolicy;
- (id)sequencePathForId:(struct { unsigned long long x0; unsigned short x1; unsigned char x2; } *)a0;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2 purgeable:(BOOL)a3;
- (id)logNameFromDate:(id)a0;
- (void)logData:(id)a0 withContext:(struct { unsigned long long x0; unsigned long long x1; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x2; } *)a1;
- (void)logRemoveIdentity:(id)a0 withTemplateListData:(id)a1 templateSize:(unsigned long long)a2 client:(id)a3 isPO:(BOOL)a4;
- (void)logCameraFrame:(id)a0 withBuffers:(id)a1;
- (id)eventPathWithName:(id)a0 date:(id)a1;
- (id)computeAllVsAllMatrixFromScoreDataArray:(id)a0 sequenceNumber:(unsigned short)a1;
- (void)logInternalCameraFrame:(struct { struct { unsigned long long x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x6; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; struct { unsigned short x0; unsigned char x1; char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; } x5; unsigned char x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned char x12; unsigned char x13; } *)a0 sensorRawData:(id)a1 metaData:(id)a2;
- (void)logSequenceInfo:(id)a0 withContext:(struct { unsigned long long x0; unsigned long long x1; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x2; } *)a1 orientation:(struct { unsigned long long x0; double x1; double x2; double x3; struct { double x0; double x1; double x2; } x4; struct { double x0; double x1; double x2; } x5; struct { double x0; double x1; double x2; } x6; } *)a2 identities:(id)a3;
- (void)logTemplateList:(id)a0 withContext:(struct { unsigned long long x0; unsigned long long x1; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x2; } *)a1 isPO:(BOOL)a2;
- (void)logTemplate:(id)a0 withContext:(struct { unsigned long long x0; unsigned long long x1; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x2; } *)a1;
- (id)initForInternalLogging:(BOOL)a0;
- (void).cxx_destruct;
- (id)sequencePathForId:(struct { unsigned long long x0; unsigned short x1; unsigned char x2; } *)a0 andSubdirectory:(id)a1;
- (id)logLogContextWithDate:(id)a0;
- (void)logSequenceDebug:(id)a0 withContext:(struct { unsigned long long x0; unsigned long long x1; struct { unsigned long long x0; unsigned short x1; unsigned char x2; } x2; } *)a1;
- (void)logTemplateList:(id)a0 withTemplateSize:(unsigned long long)a1 sequenceNumber:(unsigned short)a2 date:(id)a3 toPath:(id)a4 isPO:(BOOL)a5;
- (void)applyRetentionPolicy;
- (void)logPasscodeValidatedWithUserID:(unsigned int)a0;
- (void)logAllVsAllWithDate:(id)a0;

@end
