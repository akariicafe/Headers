@class NSMutableArray, MFMailboxProvider, NSMutableSet;

@interface _MFMailMessageDuplicateInfo : NSObject

@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;
@property (retain, nonatomic) NSMutableSet *mailboxes;
@property (retain, nonatomic) NSMutableArray *flags;
@property (retain, nonatomic) NSMutableArray *dates;

- (void)addMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxProvider:(id)a0;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)combinedDate;

@end
