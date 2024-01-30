@class NSObject;
@protocol OS_dispatch_queue;

@interface FKAddressBook : NSObject

@property (nonatomic) void *addressBook;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;

+ (id)sharedInstance;
+ (void)performBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
