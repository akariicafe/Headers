@interface PMMPredictionNotification : NSObject {
    id _notificationToken;
}

+ (void)postPredictionUpdate:(id)a0 consumer:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithPredictionUpdateListener:(id /* block */)a0;

@end
