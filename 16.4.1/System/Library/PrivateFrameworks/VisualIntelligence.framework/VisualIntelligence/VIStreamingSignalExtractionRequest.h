@class NSUUID, VIStreamingFrame, VIQueryContext;

@interface VIStreamingSignalExtractionRequest : NSObject

@property (readonly, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) VIStreamingFrame *highResolutionFrame;
@property (readonly, nonatomic) VIQueryContext *queryContext;

- (void).cxx_destruct;
- (id)initWithObjectUUID:(id)a0 highResolutionFrame:(id)a1 queryContext:(id)a2;

@end
