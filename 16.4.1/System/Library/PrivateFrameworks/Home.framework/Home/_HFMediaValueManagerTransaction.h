@class NSNumber, NAFuture;

@interface _HFMediaValueManagerTransaction : NSObject

@property (retain, nonatomic) NAFuture *writeFuture;
@property (nonatomic) long long playbackState;
@property (retain, nonatomic) NSNumber *transactionNumber;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
