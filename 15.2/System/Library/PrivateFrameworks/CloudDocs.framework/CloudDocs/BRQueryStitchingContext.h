@class BRQuery, BRNotificationReceiver;

@interface BRQueryStitchingContext : NSObject {
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (void)performAsyncOnReceiver:(id /* block */)a0;

@end
