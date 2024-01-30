@class NSMutableDictionary;

@interface DSDateFormatter : NSObject

@property (retain, nonatomic) NSMutableDictionary *dateFormatters;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)formatterWithType:(long long)a0;

@end
