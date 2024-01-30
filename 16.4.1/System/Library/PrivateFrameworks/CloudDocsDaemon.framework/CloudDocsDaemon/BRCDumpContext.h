@class NSString, BRCDumper, PQLConnection, NSDate, brc_task_tracker;

@interface BRCDumpContext : NSObject {
    long long _indentation;
    BRCDumper *_dumper;
    NSDate *_nowDate;
}

@property (readonly, nonatomic) PQLConnection *db;
@property (readonly, nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *fp;
@property (retain, nonatomic) NSString *indentationBaseString;
@property (nonatomic) BOOL liveDaemon;
@property (nonatomic) BOOL onlyActiveStuff;
@property (nonatomic) BOOL dumpTrackedPendingDownloads;
@property (retain, nonatomic) brc_task_tracker *taskTracker;
@property (nonatomic) BOOL newLineAfterWrite;
@property (readonly, nonatomic) BOOL isCancelled;

+ (id)highlightedString:(id)a0 type:(long long)a1 context:(id)a2;
+ (long long)nowFromContext:(id)a0;
+ (id)stringFromItemAsString:(id)a0 context:(id)a1;
+ (id)nowDateFromContext:(id)a0;
+ (id)stringFromByteCount:(long long)a0 context:(id)a1;
+ (id)stringFromByteCount:(long long)a0 showActualByteCount:(BOOL)a1 suffix:(id)a2 context:(id)a3;
+ (id)stringFromCount:(long long)a0 context:(id)a1;
+ (id)stringFromCount:(long long)a0 showActualCount:(BOOL)a1 suffix:(id)a2 isByteCount:(BOOL)a3 context:(id)a4;
+ (id)stringFromDueDate:(id)a0 allowsPast:(BOOL)a1 context:(id)a2;
+ (id)stringFromDueStamp:(long long)a0 allowsPast:(BOOL)a1 context:(id)a2;
+ (id)stringFromError:(id)a0 context:(id)a1;
+ (id)stringFromErrorString:(id)a0 context:(id)a1;
+ (id)stringFromInterval:(double)a0 context:(id)a1;
+ (id)stringFromItemID:(id)a0 context:(id)a1;
+ (id)stringFromOperationUUID:(unsigned char[16])a0 context:(id)a1;
+ (id)stringFromThrottleState:(int)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithDumper:(id)a0;
- (void)pushIndentation;
- (id)highlightedString:(id)a0 type:(long long)a1;
- (id)initWithFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;
- (void)popIndentation;
- (BOOL)shouldKeepDumpingWithItemCount:(unsigned int)a0 includeAllItems:(BOOL)a1;
- (void)writeEmptyLine;
- (void)writeLineWithFormat:(id)a0;

@end
