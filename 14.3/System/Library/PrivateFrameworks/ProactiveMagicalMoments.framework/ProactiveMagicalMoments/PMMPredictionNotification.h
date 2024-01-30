@interface PMMPredictionNotification : NSObject {
    id _notificationToken;
}

+ (void)postPredictionUpdate:(id)a0 consumer:(unsigned long long)a1;

- (id)initWithPredictionUpdateListener:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
