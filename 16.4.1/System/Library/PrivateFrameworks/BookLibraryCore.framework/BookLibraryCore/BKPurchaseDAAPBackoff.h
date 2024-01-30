@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject

@property (retain, nonatomic) NSDate *backoffUntil;
@property (nonatomic) long long failureCount;

- (void)clear;
- (void).cxx_destruct;
- (BOOL)failureIntervals:(unsigned long long)a0;
- (BOOL)hasBackedOff;

@end
