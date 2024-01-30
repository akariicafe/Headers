@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation {
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) NSString *humanReadableDescription;

- (void)addTask:(id /* block */)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
