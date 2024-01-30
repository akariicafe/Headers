@class _EARFormatter, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface EMTTokenizer : NSObject {
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSLocale *outputLocale;

- (id)format:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0;
- (id)format:(id)a0 preToPostItnMap:(id)a1;

@end
