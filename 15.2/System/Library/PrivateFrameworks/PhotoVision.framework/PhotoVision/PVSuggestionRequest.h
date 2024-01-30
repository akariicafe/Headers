@class NSString, NSMutableDictionary, NSArray, VNCanceller;

@interface PVSuggestionRequest : NSObject

@property (readonly) long long type;
@property (readonly) NSString *requestId;
@property (readonly) NSMutableDictionary *clusterFlagByClusterId;
@property (readonly) NSArray *csns;
@property (readonly) NSArray *cflags;
@property (copy) id /* block */ updateHandler;
@property (readonly) VNCanceller *canceller;

+ (id)requestWithFaceClusterIds:(id)a0 clusterFlags:(id)a1 updateHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithFaceClusterIds:(id)a0 clusterFlags:(id)a1 updateHandler:(id /* block */)a2;

@end
