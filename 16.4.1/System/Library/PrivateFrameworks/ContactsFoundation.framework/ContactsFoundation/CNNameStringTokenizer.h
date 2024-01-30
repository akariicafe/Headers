@class CNUnfairLock, NSObject;
@protocol OS_dispatch_queue;

@interface CNNameStringTokenizer : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (readonly, nonatomic) struct __CFStringTokenizer { } *tokenizer;
@property (readonly, nonatomic) CNUnfairLock *lock;

+ (void)setInferredNameOrder:(long long *)a0 toTokenizerNameOrder:(int)a1;
+ (id)tokenizeNameString:(id)a0;
+ (id)tokenizeNameString:(id)a0 usingLocale:(id)a1 inferredNameOrder:(long long *)a2;

- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)tokenizeNameString:(id)a0 inferredNameOrder:(long long *)a1;

@end
