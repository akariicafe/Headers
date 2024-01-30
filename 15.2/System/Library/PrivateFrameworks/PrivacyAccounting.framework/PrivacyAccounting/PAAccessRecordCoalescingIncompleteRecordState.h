@class NSString;
@protocol PAAccessRecord, PAAccessRecordCoalescingState;

@interface PAAccessRecordCoalescingIncompleteRecordState : NSObject <PAAccessRecordCoalescingState> {
    id<PAAccessRecord> _recordToRepublish;
}

@property (readonly, nonatomic) id<PAAccessRecordCoalescingState> previousState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPreviousState:(id)a0 recordToRepublish:(id)a1;
- (id)recordsToRepublish;

@end
