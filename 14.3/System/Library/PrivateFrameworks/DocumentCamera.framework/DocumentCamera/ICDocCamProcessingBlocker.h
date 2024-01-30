@class NSMutableSet;
@protocol ICDocCamProcessingBlockerDelegate;

@interface ICDocCamProcessingBlocker : NSObject

@property (weak, nonatomic) id<ICDocCamProcessingBlockerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *blockerSet;

- (void).cxx_destruct;
- (BOOL)blocked;
- (id)initWithDelegate:(id)a0;
- (void)addBlockerOfType:(id)a0 clearRectangles:(BOOL)a1 clearQueue:(BOOL)a2;
- (void)removeBlockerOfType:(id)a0;

@end
