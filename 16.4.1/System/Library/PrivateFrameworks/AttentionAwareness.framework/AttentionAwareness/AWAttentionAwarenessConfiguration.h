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
@property (nonatomic) BOOL continuousFaceDetectMode;
@property (nonatomic) BOOL unityStream;
@property (copy, nonatomic) NSSet *attentionLostTimeouts;
@property (copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;

+ (void)initialize;
+ (unsigned long long)supportedEvents;
+ (id)supportedEventsString;
+ (struct AWNotification_s { } *)notifySupportedEventsChangedWithQueue:(id)a0 block:(id /* block */)a1;
+ (void)cancelNotification:(struct AWNotification_s { } *)a0;

- (unsigned long long)tagIndex;
- (void)setAllowedHIDEventsForRemoteEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAttentionLostTimeouts:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAttentionLostTimeout:(double)a0;
- (id)attentionLostTimeouts;
- (void)dealloc;
- (id)allowedHIDEventsForRemoteEvent;
- (BOOL)validateWithError:(id *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
