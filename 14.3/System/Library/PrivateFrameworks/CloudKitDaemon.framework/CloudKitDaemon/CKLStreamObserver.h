@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject

@property (retain, nonatomic) CKLEventFilter *filter;
@property (readonly, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSMutableDictionary *processNamesByPath;
@property (nonatomic) BOOL simulatorOnly;
@property (nonatomic) BOOL onlyTestLogs;
@property (nonatomic) BOOL colorOutput;
@property (retain, nonatomic) NSString *processName;

- (void)finish;
- (void)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithLogTypes:(unsigned long long)a0;
- (void)eventMatched:(id)a0;
- (id)_processNameForPath:(id)a0;

@end
