@class NSString, NSArray;

@interface FTMutableShortcutFuzzyMatchRequest_StringTokenPair : FTShortcutFuzzyMatchRequest_StringTokenPair

@property (copy, nonatomic) NSString *raw_string;
@property (copy, nonatomic) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
