@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation {
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) NSString *humanReadableDescription;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)addTask:(id /* block */)a0;

@end
