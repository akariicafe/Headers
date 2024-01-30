@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}

@property (copy, nonatomic) id /* block */ transmogrifier;

- (void)newMessagesAvailable:(id)a0;
- (BOOL)shouldCancel;
- (id)init;
- (id)messages;
- (id)copyMessages;
- (void).cxx_destruct;

@end
