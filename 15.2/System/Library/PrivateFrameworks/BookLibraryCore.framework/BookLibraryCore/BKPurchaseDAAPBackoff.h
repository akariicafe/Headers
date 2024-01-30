@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject

@property (retain, nonatomic) NSDate *backoffUntil;
@property (nonatomic) long long failureCount;

- (void)clear;
- (void).cxx_destruct;
- (BOOL)hasBackedOff;
- (BOOL)failureIntervals:(unsigned long long)a0;

@end
