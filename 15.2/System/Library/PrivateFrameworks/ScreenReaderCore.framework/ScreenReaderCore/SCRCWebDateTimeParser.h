@class NSMutableDictionary;

@interface SCRCWebDateTimeParser : NSObject {
    NSMutableDictionary *_expressions;
    NSMutableDictionary *_dateFormats;
}

@property (class, readonly) SCRCWebDateTimeParser *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_expressionForRule:(id)a0;
- (id)_cachedDateFormatterForFormat:(id)a0;
- (id)_handleDuration:(id)a0;
- (id)_handleTimes:(id)a0;
- (id)_handleDatesAndTimes:(id)a0;
- (id)spokenStringForDateTimeAttribute:(id)a0;

@end
