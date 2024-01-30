@class NSOperationQueue;

@interface NTAWorldClockPreferencesListenerObserver : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;

@end
