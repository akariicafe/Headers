@class NSMutableData, NSString, NSError;

@interface WFGetExternalAddressOperation : NSOperation

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) struct __CFReadStream { } *stream;
@property (nonatomic) BOOL useIPv6;
@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) NSError *error;

- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)update;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)handleStreamEvent:(unsigned long long)a0;

@end
