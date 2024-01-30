@class NSUUID, NSString;
@protocol HKFetchOperationDelegate;

@interface HKFetchOperation : NSObject

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<HKFetchOperationDelegate> delegate;
@property (nonatomic) double queueTime;
@property (nonatomic) double executionTime;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSString *operationDescription;
@property (nonatomic) BOOL highPriority;

- (void).cxx_destruct;
- (void)_alertDelegateDidUpdatePriority;
- (id)initWithOperationDescription:(id)a0;
- (void)startOperationWithCompletion:(id /* block */)a0;
- (void)stopOperation;

@end
