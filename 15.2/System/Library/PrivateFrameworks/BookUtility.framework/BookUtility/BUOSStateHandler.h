@interface BUOSStateHandler : NSObject

@property (nonatomic) unsigned long long osStateHandle;

- (id)initWithTitle:(id)a0 block:(id /* block */)a1;
- (id)initWithTitle:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dealloc;

@end
