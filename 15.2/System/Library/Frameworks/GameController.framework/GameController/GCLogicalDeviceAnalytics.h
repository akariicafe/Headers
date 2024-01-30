@class NSString, NSMutableArray, NSDate;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCLogicalDeviceAnalytics : NSObject {
    NSDate *_curSessionStartTime;
    NSDate *_firstSessionStartTime;
    BOOL _eventSent;
}

@property (retain, nonatomic) NSMutableArray *sessionIntervals;
@property (readonly, retain, nonatomic) id<NSObject, NSCopying, NSSecureCoding> controllerID;
@property (readonly, retain, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSString *productCategory;

- (id)description;
- (void).cxx_destruct;
- (void)resumeSession;
- (void)pauseSession;
- (double)sessionActiveDuration;
- (double)sessionTotalDuration;
- (id)initWithAnonymousIdentifier:(id)a0 bundleIdentifier:(id)a1 productCategory:(id)a2;
- (void)flushSessionAndSendCAEvent;

@end
