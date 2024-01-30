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
- (id)_init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithBSAction:(id)a0;
- (id)initWithBehavior:(id)a0 data:(id)a1 responseBlock:(id /* block */)a2;
- (void)sendResponse:(long long)a0 withContext:(id)a1;

@end
