@class NSString;

@interface FBAsynchronousShutdownTask : NSObject {
    NSString *_name;
    double _interval;
}

+ (void)startTaskWithName:(id)a0 timeout:(double)a1 workItem:(id /* block */)a2;
+ (void)waitForTasks;

- (void).cxx_destruct;

@end
