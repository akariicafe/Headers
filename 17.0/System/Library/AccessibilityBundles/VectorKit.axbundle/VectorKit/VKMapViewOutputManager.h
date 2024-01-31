@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject

@property (retain, nonatomic) NSMutableArray *outputQueue;

+ (id)sharedOutputManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAccessibilityAnnouncementDidFinish:(id)a0;
- (void)clearOutputQueue;
- (unsigned long long)outputQueueCount;
- (void)queueOutput:(id)a0;

@end
