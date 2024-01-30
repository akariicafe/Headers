@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)timecodeFormatter;
+ (id)wordyFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromTimeInterval:(double)a0;

@end
