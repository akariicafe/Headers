@class NSString;

@interface HKSPImmediateExecutor : NSObject <HKSPExecutor>

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithBlock:(id /* block */)a0;

@end
