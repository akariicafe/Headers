@class NSMutableArray;

@interface GeocodeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
