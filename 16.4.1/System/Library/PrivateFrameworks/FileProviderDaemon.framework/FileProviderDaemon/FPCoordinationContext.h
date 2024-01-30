@class NSProgress;

@interface FPCoordinationContext : NSObject

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (id)initWithProgress:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
