@class BRQuery, BRNotificationReceiver;

@interface BRQueryStitchingContext : NSObject {
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

- (void)performAsyncOnReceiver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;

@end
