@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}

@property (copy, nonatomic) id /* block */ transmogrifier;

- (id)messages;
- (BOOL)shouldCancel;
- (void).cxx_destruct;
- (id)init;
- (void)newMessagesAvailable:(id)a0;
- (id)copyMessages;

@end
