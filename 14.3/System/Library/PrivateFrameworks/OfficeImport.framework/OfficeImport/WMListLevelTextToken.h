@class NSString, CMNumberFormatter;

@interface WMListLevelTextToken : NSObject {
    CMNumberFormatter *_formatter;
}

@property (readonly) NSString *string;
@property (readonly) int level;

+ (id)tokenWithString:(id)a0 level:(int)a1 formatter:(id)a2;

- (void).cxx_destruct;
- (id)stringForIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0 level:(int)a1 formatter:(id)a2;

@end
