@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithMailbox:(id)a0;
- (void)dealloc;

@end
