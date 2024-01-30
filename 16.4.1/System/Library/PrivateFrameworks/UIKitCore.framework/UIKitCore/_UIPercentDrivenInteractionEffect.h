@class NSString;

@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect>

@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (id)initWithProgressBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
