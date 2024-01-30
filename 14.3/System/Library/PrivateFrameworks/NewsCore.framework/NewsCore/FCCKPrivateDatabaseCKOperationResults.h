@class FCThreadSafeMutableArray, NSArray, NSError, NSObject;
@protocol OS_dispatch_group;

@interface FCCKPrivateDatabaseCKOperationResults : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeItems;
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeErrorsAndItemIDs;
@property (readonly, nonatomic) NSArray *combinedResultItems;
@property (readonly, nonatomic) NSError *combinedError;

- (id)init;
- (void).cxx_destruct;
- (void)operationWillStart;
- (void)operationDidFinishWithItemIDs:(id)a0 resultItems:(id)a1 error:(id)a2;
- (void)notifyWhenFinishWithQoS:(long long)a0 completionHandler:(id /* block */)a1;

@end
