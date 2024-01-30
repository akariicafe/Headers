@class NSString;

@interface _PXAsyncIterator : NSObject <PXAsyncIterator>

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)next;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)_executeNextRun;
- (id)initWithCount:(unsigned long long)a0 handler:(id /* block */)a1;

@end
