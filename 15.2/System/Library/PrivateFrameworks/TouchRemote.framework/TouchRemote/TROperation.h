@class TRSession, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TRSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)userCancelledError;

- (void)execute;
- (id)initWithSession:(id)a0;
- (void)finishWithError:(id)a0;
- (void)finishWithResult:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end
