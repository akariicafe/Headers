@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject

@property (retain, nonatomic) NSArray *mailboxesToUpdate;
@property (retain, nonatomic) NSArray *mailboxesToReSync;
@property (retain, nonatomic) NSArray *mailboxesToDisableSync;

- (void).cxx_destruct;

@end
