@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DAOfficeHoursContext : NSObject

@property (readonly, nonatomic) BOOL isFetch;
@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ fetchCompletionBlock;
@property (copy, nonatomic) id /* block */ setCompletionBlock;

- (void)abortWithError:(id)a0;
- (void).cxx_destruct;
- (void)finishFetchWithOfficeHours:(id)a0 error:(id)a1;
- (void)finishSetWithError:(id)a0;

@end
