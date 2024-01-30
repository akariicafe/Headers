@class NSString, NSError, NSObject;
@protocol OS_dispatch_group;

@interface _PXTapToRadarDiagnosticCollectionOperation : NSObject <PXTapToRadarDiagnosticCollectionOperation> {
    NSObject<OS_dispatch_group> *_completionGroup;
    BOOL _timedOut;
    BOOL _ended;
    BOOL _success;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 timeout:(double)a1;
- (void).cxx_destruct;
- (void)_timedOut;
- (void)endWithSuccess:(BOOL)a0 error:(id)a1;
- (void)installCompletionHandler:(id /* block */)a0;

@end
