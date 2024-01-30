@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PregenerateHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableArray *pipelines;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)runPregenerateWithCollection:(id)a0 naturalSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

@end
