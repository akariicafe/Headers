@class NSMutableData, NSString, NSError;

@interface WFGetExternalAddressOperation : NSOperation

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) struct __CFReadStream { } *stream;
@property (nonatomic) BOOL useIPv6;
@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) NSError *error;

- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (void)update;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleStreamEvent:(unsigned long long)a0;

@end
