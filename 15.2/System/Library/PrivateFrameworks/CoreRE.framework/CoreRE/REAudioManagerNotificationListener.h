@interface REAudioManagerNotificationListener : NSObject {
    void *_owner;
}

- (void)sessionInterrupted:(id)a0;
- (id)initWithOwner:(void *)a0;
- (void)stop;
- (void)engineInterrupted:(id)a0;

@end
