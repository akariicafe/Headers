@class NSMutableArray, NSObject;
@protocol UITextPasteCoordinatorDelegate, OS_dispatch_group;

@interface UITextPasteCoordinator : NSObject {
    NSMutableArray *_items;
    NSObject<OS_dispatch_group> *_wait;
}

@property (readonly, weak, nonatomic) id<UITextPasteCoordinatorDelegate> delegate;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)_finish;
- (void)_determineFinished;
- (void)setResult:(id)a0 forItem:(id)a1;
- (BOOL)performBlockingWait:(double)a0;
- (id)initWithDelegate:(id)a0;

@end
