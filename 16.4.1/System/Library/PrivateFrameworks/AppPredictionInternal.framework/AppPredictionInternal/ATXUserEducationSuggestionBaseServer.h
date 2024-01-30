@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXUserEducationSuggestionBaseServer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)init;
- (void).cxx_destruct;
- (void)performBlockOnInternalSerialQueue:(id /* block */)a0;

@end
