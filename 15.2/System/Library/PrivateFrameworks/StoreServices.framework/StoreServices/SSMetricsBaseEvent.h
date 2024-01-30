@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSNumber *pixelRatio;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *windowHeight;
@property (retain, nonatomic) NSString *windowOrientation;
@property (retain, nonatomic) NSNumber *windowWidth;
@property (retain, nonatomic) NSString *pageContext;
@property (retain, nonatomic) NSString *pageDescription;
@property (nonatomic) unsigned long long pageID;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSString *pageURL;

- (BOOL)isBlacklistedByConfiguration:(id)a0;
- (id)description;
- (id)init;

@end
