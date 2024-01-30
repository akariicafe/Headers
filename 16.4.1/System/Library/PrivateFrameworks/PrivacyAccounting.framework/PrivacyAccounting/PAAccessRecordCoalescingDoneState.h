@class NSString, NSArray;

@interface PAAccessRecordCoalescingDoneState : NSObject <PAAccessRecordCoalescingState> {
    NSArray *_groupedRecordsToRepublish;
    BOOL _reversed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initByEndingLastWindow:(id)a0 reversed:(BOOL)a1;
- (id)recordsToRepublish;

@end
