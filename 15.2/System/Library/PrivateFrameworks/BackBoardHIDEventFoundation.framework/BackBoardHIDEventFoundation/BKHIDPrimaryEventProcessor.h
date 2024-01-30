@class NSString, NSArray;
@protocol BKHIDEventProcessor;

@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDEventProcessor> {
    NSArray *_subProcessors[40];
    id<BKHIDEventProcessor> _defaultProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
