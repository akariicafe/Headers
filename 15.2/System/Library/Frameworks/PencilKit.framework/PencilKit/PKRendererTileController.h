@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererTileController : NSObject {
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
    NSMutableDictionary *_tileMultiplyFramebuffers;
}

- (void).cxx_destruct;
- (id)init;

@end
