@class NSString;

@interface DEUpdaterStatus : NSObject

@property (retain, nonatomic) NSString *publicationId;
@property (nonatomic) BOOL upToDate;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL loggedEvent;

- (void).cxx_destruct;
- (id)initWithPublicationId:(id)a0 upToDate:(BOOL)a1 version:(id)a2;
- (void)logCoreAnalyticsEvent;

@end
