@interface INCDisplayLayoutMonitorObserver : NSObject

@property (copy, nonatomic) id /* block */ handler;

+ (void)initialize;

- (void).cxx_destruct;
- (void)updateDisplayLayout:(id)a0;

@end
