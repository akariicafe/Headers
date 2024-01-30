@class NSArray, NSMutableSet, NSMutableArray;

@interface SGHistorySharedData : NSObject {
    NSMutableSet *confirmedEventHashes;
    NSMutableSet *confirmedEventWithoutTimestampHashes;
    NSMutableSet *rejectedEventHashes;
    NSMutableSet *confirmedReminderHashes;
    NSMutableSet *rejectedReminderHashes;
    NSMutableSet *contactHashes;
    NSMutableSet *confirmedEventFieldHashes;
    NSMutableSet *confirmedEventWithoutTimestampFieldHashes;
    NSMutableSet *storageDetailHashes;
    NSMutableSet *dontUpdate;
    NSArray *resetInfo;
    NSMutableArray *observers;
}

- (void).cxx_destruct;

@end
