@class NSByteCountFormatter, NSNumberFormatter;

@interface SSNumberFormatManager : NSObject

@property (retain) NSNumberFormatter *numberFormatter;
@property (retain) NSByteCountFormatter *byteCountFormatter;

+ (void)initialize;
+ (id)stringFromByteCount:(long long)a0;
+ (id)stringFromInt:(int)a0 withMinimumDigits:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;

@end
