@class NSMutableDictionary;

@interface ATXDuetCallbackGuardedData : NSObject {
    unsigned long long nextRegistrationToken;
    NSMutableDictionary *_deletionHandlers;
}

- (void).cxx_destruct;

@end
