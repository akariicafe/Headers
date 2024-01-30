@class NSMutableArray;

@interface GeocodeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (id)init;
- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;

@end
