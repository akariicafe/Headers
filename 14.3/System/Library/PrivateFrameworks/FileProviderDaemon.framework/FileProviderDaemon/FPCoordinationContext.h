@class NSProgress;

@interface FPCoordinationContext : NSObject

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithProgress:(id)a0 completionHandler:(id /* block */)a1;

@end
