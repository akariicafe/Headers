@class NSMutableArray;

@interface CSFCircularEventsCacheBuffer : NSObject {
    long long _lastEventIndex;
}

@property (readonly, nonatomic) NSMutableArray *eventsArray;

- (id)init;
- (void).cxx_destruct;
- (void)addEventToCacheBuffer:(id)a0;
- (void)clearBuffer;

@end
