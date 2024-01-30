@class NSArray, NSString;

@interface FTMutableSetSpeechContext : FTSetSpeechContext

@property (copy, nonatomic) NSArray *contextual_text;
@property (copy, nonatomic) NSString *left_context;
@property (copy, nonatomic) NSString *right_context;
@property (copy, nonatomic) NSArray *context_with_pron_hints;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
