@protocol PKPencilTouchDetectionDelegate;

@interface PKPencilTouchDetection : NSObject

@property (weak, nonatomic) id<PKPencilTouchDetectionDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateWithUserInfo:(id)a0;
- (void)pencilType:(long long)a0 hasRecentlyBeenUsedWithCompletionHandler:(id /* block */)a1;

@end
