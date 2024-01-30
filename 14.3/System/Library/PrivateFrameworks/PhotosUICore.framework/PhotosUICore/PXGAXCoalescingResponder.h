@class NSString, NSMutableArray;
@protocol PXGAXResponder;

@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder> {
    NSMutableArray *_pendingAXEventBlocks;
}

@property (nonatomic) BOOL pauseEventDelivery;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)axContainingViewForAXGroup:(id)a0;
- (void)_notifyResponder:(id /* block */)a0;
- (void)_distributeEvents;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;

@end
