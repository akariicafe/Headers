@class NSString, NSSet, NSDictionary;
@protocol NSCopying;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    BOOL _samplingDelayExplicitlySet;
    BOOL _attentionLostEventMaskExplicitlySet;
    unsigned long long _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<NSCopying> tag;
@property (nonatomic) unsigned long long notificationMask;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) unsigned long long attentionLostEventMask;
@property (nonatomic) double samplingInterval;
@property (nonatomic) double samplingDelay;
@property (nonatomic) BOOL sampleWhileAbsent;
@property (nonatomic) BOOL retroactiveTimeoutMode;
@property (copy, nonatomic) NSSet *attentionLostTimeouts;
@property (copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;

+ (void)initialize;
+ (void)cancelNotification:(struct AWNotification_s { } *)a0;
+ (struct AWNotification_s { } *)notifySupportedEventsChangedWithQueue:(id)a0 block:(id /* block */)a1;
+ (id)supportedEventsString;
+ (unsigned long long)supportedEvents;

- (BOOL)validateWithError:(id *)a0;
- (id)attentionLostTimeouts;
- (void)encodeWithCoder:(id)a0;
- (void)setAllowedHIDEventsForRemoteEvent:(id)a0;
- (id)description;
- (void)setAttentionLostTimeouts:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)tagIndex;
- (void)setAttentionLostTimeout:(double)a0;
- (void)dealloc;
- (id)allowedHIDEventsForRemoteEvent;

@end
