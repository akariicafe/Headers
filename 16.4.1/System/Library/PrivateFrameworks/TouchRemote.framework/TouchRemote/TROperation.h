@class TRSession, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TRSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)userCancelledError;

- (void)execute;
- (void)finishWithError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
