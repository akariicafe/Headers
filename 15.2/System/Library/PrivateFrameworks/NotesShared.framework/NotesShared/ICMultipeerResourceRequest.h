@class ICNote, NSUUID, NSMutableSet;

@interface ICMultipeerResourceRequest : NSOperation

@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property BOOL isSuccessful;
@property (readonly) ICNote *note;
@property (retain, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) NSMutableSet *failedDevices;

- (BOOL)isConcurrent;
- (void)startRequest;
- (void).cxx_destruct;
- (id)init;
- (void)didFinish:(id)a0;

@end
