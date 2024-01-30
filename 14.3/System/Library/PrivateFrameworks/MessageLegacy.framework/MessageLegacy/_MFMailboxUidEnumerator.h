@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithMailbox:(id)a0;

@end
