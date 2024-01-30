@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)wordyFormatter;
+ (id)timecodeFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromTimeInterval:(double)a0;

@end
