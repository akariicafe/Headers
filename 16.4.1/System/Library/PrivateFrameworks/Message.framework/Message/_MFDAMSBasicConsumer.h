@class MFMailMessageLibrary, MFDAMessageStore, MFActivityMonitor, MFError, MFDAMailbox;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {
    MFDAMailbox *mailbox;
    MFDAMessageStore *store;
    MFMailMessageLibrary *library;
    unsigned long long numNewMessages;
}

@property (retain, nonatomic) MFActivityMonitor *monitor;
@property (retain, nonatomic) MFError *error;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;

@end
