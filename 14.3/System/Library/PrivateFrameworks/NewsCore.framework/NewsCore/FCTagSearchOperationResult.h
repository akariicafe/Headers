@class FCStreamingResults;

@interface FCTagSearchOperationResult : NSObject

@property (retain, nonatomic) FCStreamingResults *channels;
@property (retain, nonatomic) FCStreamingResults *topics;

- (void).cxx_destruct;

@end
