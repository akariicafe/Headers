@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMailbox:(id)a0;

@end
