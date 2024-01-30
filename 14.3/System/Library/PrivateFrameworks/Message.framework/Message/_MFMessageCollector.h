@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}

@property (copy, nonatomic) id /* block */ transmogrifier;

- (BOOL)shouldCancel;
- (id)init;
- (void).cxx_destruct;
- (id)messages;
- (void)newMessagesAvailable:(id)a0;
- (id)copyMessages;

@end
