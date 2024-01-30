@class NSString, TPSExperiment;

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long displayCount;
@property (readonly, nonatomic) TPSExperiment *experiment;

+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 displayType:(unsigned long long)a3 experiment:(id)a4 date:(id)a5;
+ (BOOL)supportsSecureCoding;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 displayType:(unsigned long long)a3 experiment:(id)a4 date:(id)a5;
- (id)duetEvent;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
