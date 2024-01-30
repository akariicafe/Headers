@class NSString, NSMutableDictionary;

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {
    NSMutableDictionary *_eventProcessorsByClassName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
