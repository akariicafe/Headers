@class NSDate;

@interface DOCFrecencyBasedEvent : NSObject

@property (retain, nonatomic) NSDate *lastUsedDate;
@property (nonatomic) double frecency;

- (void).cxx_destruct;
- (double)frecencyScoreAtDate:(id)a0;
- (void)updateFrecencyAtDate:(id)a0;

@end
