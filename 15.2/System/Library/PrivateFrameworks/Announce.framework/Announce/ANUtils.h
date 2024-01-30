@class NSDateFormatter;

@interface ANUtils : NSObject

@property (class, readonly, nonatomic) BOOL isInternalBuild;
@property (class, readonly, nonatomic) NSDateFormatter *an_dateFormatterForFilename;

+ (double)machTimeToSeconds:(unsigned long long)a0;
+ (unsigned long long)secondsToMachTime:(double)a0;

@end
