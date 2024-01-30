@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFSplitScreenAppAction : WFAction

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *leftWindowsToWindowID;
@property (retain, nonatomic) NSMutableDictionary *rightWindowsToWindowID;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
