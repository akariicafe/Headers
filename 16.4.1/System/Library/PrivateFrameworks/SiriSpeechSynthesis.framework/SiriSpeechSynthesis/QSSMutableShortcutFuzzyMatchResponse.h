@class NSString, NSArray;

@interface QSSMutableShortcutFuzzyMatchResponse : QSSShortcutFuzzyMatchResponse

@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSArray *shortcut_score_pairs;
@property (nonatomic) int return_code;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
