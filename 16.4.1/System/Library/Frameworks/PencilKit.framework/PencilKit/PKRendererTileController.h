@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererTileController : NSObject {
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
    NSMutableDictionary *_tileMultiplyFramebuffers;
}

- (id)init;
- (void).cxx_destruct;

@end
