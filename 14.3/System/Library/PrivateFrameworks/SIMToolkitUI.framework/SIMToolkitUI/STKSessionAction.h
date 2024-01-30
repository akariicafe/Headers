@class STKSessionBehavior, BSAction;
@protocol BSXPCCoding;

@interface STKSessionAction : NSObject {
    STKSessionBehavior *_behavior;
    id<BSXPCCoding> _data;
    BOOL _invalidated;
}

@property (readonly, nonatomic) BSAction *_BSAction;
@property (readonly, nonatomic) STKSessionBehavior *behavior;
@property (readonly, nonatomic) id<BSXPCCoding> sessionData;

+ (id)_sessionActionFromBSAction:(id)a0;

- (void)sendResponse:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (void)invalidate;
- (id)initWithBehavior:(id)a0 data:(id)a1 responseBlock:(id /* block */)a2;
- (void)sendResponse:(long long)a0 withContext:(id)a1;
- (id)_initWithBSAction:(id)a0;

@end
