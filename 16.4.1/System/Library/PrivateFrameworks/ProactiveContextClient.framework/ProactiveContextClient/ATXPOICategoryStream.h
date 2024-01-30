@interface ATXPOICategoryStream : NSObject

- (id)sinkOnScheduler:(id)a0 withCompletion:(id /* block */)a1 receiveInput:(id /* block */)a2;
- (id)publisherForLastNEvents:(id)a0;

@end
