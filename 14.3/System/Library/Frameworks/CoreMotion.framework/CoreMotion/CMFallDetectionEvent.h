@class NSDate;

@interface CMFallDetectionEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long resolution;

- (void)dealloc;
- (id)initWithAnomalyEvent:(id)a0;
- (id)initWithResolution:(long long)a0 date:(id)a1;

@end
