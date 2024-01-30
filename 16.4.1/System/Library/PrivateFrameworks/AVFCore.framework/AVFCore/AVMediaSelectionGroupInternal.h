@class NSString, AVWeakReference;

@interface AVMediaSelectionGroupInternal : NSObject {
    AVWeakReference *weakReference;
    NSString *currentBundleIdentifier;
}

@end
