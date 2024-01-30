@class NSString;

@interface OZFxPlugSharedBaseSaver : NSObject {
    unsigned long long _sessionID;
    NSString *_uuid;
}

- (void)setSessionID:(unsigned long long)a0;
- (id)initWithSharedBase:(void *)a0;
- (void *)lockSharedBase;
- (void)unlockSharedBase;

@end
