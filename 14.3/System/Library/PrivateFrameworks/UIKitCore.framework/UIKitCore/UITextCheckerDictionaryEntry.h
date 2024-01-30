@class NSData;

@interface UITextCheckerDictionaryEntry : NSObject {
    struct __CFSet { } *dictionary;
    NSData *data;
    long long size;
}

- (void)dealloc;

@end
