@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {
    NSDateFormatter *_dateFormatter;
}

+ (id)_sharedInstance;
+ (id)logCard:(id)a0;
+ (id)logCardData:(id)a0 format:(unsigned long long)a1;
+ (id)logCard:(id)a0 format:(unsigned long long)a1;
+ (id)logCardData:(id)a0;

- (id)_dateFormatter;
- (void).cxx_destruct;
- (id)init;
- (id)_nowString;
- (id)_currentFilenameForFormat:(unsigned long long)a0;

@end
