@protocol PKPencilTouchDetectionDelegate;

@interface PKPencilTouchDetection : NSObject

@property (weak, nonatomic) id<PKPencilTouchDetectionDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)pencilType:(long long)a0 hasRecentlyBeenUsedWithCompletionHandler:(id /* block */)a1;
- (void)didUpdateWithUserInfo:(id)a0;

@end
