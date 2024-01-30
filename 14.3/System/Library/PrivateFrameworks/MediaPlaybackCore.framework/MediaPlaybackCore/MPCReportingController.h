@class NSMutableArray, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPCReportingController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPCReportingController *_parentReportingController;
}

@property (weak, nonatomic) MPCReportingController *parentReportingController;
@property (readonly, copy, nonatomic) NSArray *childReportingControllers;

- (id)init;
- (void).cxx_destruct;
- (void)_recordReportingEvents:(id)a0;
- (void)addChildReportingController:(id)a0;
- (void)recordReportingEvents:(id)a0;
- (void)removeChildReportingController:(id)a0;

@end
