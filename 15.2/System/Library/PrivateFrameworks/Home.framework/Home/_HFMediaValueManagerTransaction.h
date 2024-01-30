@class NSNumber, NAFuture;

@interface _HFMediaValueManagerTransaction : NSObject

@property (retain, nonatomic) NAFuture *writeFuture;
@property (nonatomic) long long playbackState;
@property (retain, nonatomic) NSNumber *transactionNumber;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
