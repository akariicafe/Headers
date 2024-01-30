@class NSOperationQueue;

@interface NTAWorldClockPreferencesListenerObserver : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;

@end
