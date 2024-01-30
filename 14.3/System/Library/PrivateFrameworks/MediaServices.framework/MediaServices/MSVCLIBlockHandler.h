@interface MSVCLIBlockHandler : NSObject

@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)invokeWithCommand:(id)a0;

@end
