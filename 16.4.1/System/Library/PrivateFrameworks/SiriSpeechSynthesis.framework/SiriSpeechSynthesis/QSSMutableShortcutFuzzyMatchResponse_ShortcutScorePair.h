@class NSString;

@interface QSSMutableShortcutFuzzyMatchResponse_ShortcutScorePair : QSSShortcutFuzzyMatchResponse_ShortcutScorePair

@property (copy, nonatomic) NSString *shortcut;
@property (nonatomic) double similarity_score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
