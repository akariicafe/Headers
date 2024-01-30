@class NSString, NSMutableDictionary, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface _LTAnalyticsEvent : NSObject {
    NSString *_eventName;
    double _startTime;
    double _endTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_fields;
}

@property (copy, nonatomic) NSLocale *sourceLocale;
@property (copy, nonatomic) NSLocale *targetLocale;

+ (id)timedEventWithName:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)markEnd;
- (void)sendLazy;
- (void)markStart;
- (void)addFieldsFromDictionary:(id)a0 internalOnly:(BOOL)a1;
- (void)addFieldsFromDictionary:(id)a0;
- (void)timestampWithName:(id)a0;
- (void)addFieldsWithError:(id)a0;

@end
