@class NSString, NSData, NSDate;

@interface SiriReferenceResolution.RRAnnotatedEntity : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ appBundleId;
    void /* unknown type, empty encoding */ usoEntity;
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ annotations;
    void /* unknown type, empty encoding */ saliencyComputedAt;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, copy) NSString *dataType;
@property (nonatomic, copy) NSData *data;
@property (nonatomic) void /* unknown type, empty encoding */ saliencyScore;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (void)update:(id)a0;
- (void)setAnnotationWithKey:(id)a0 value:(id)a1;

@end
