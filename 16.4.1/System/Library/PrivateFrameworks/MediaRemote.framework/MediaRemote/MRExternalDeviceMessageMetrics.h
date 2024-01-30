@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (id)initWithPath:(id)a0;
- (void)write;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addMessage:(id)a0 data:(id)a1;

@end
