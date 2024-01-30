@class SAThread, SADispatchQueue;

@interface SAThreadCallTree : SACallTree

@property (readonly) SAThread *thread;
@property (readonly) SADispatchQueue *dispatchQueue;

- (void).cxx_destruct;

@end
