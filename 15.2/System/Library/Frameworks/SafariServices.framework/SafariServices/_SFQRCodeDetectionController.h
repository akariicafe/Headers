@class NSMutableSet, BCSQRCodeParser;
@protocol BCSAction;

@interface _SFQRCodeDetectionController : NSObject {
    BCSQRCodeParser *_QRCodeParser;
    id<BCSAction> _lastDetectedAction;
    NSMutableSet *_cachedElements;
}

@property (class, readonly, nonatomic) _SFQRCodeDetectionController *sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)clearCachedElement:(id)a0;
- (id)menuElementsForElementInfo:(id)a0;
- (id)actionForElement:(id)a0;
- (void)cacheElement:(id)a0;
- (id)adjustedCopyActionForAction:(id)a0 elementInfo:(id)a1;
- (void)getActionForImage:(id)a0 completion:(id /* block */)a1;
- (id)getActionForImageSynchronously:(id)a0 userInfo:(id *)a1;
- (id)elementForAction:(id)a0;

@end
