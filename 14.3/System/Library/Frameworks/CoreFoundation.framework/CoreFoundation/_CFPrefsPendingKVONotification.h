@class NSObject;

@interface _CFPrefsPendingKVONotification : NSObject {
    NSObject *source;
    id oldValues;
    id values;
}

- (void)dealloc;

@end
