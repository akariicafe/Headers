@class NSString, NSDictionary, AXDispatchTimer, UIImage, AXUIAlert;
@protocol AXUIService;

@interface AXUIAlertContext : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double creationTimeInterval;
@property (nonatomic) double fadeAnimationDuration;
@property (retain, nonatomic) AXDispatchTimer *showOrHideTimer;
@property (retain, nonatomic) AXUIAlert *alertView;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) id<AXUIService> service;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)description;

@end
