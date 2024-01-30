@interface FTMutableItnAlignment : FTItnAlignment

@property (nonatomic) int first_pre_itn_token_index;
@property (nonatomic) int last_pre_itn_token_index;
@property (nonatomic) int first_post_itn_char_pos;
@property (nonatomic) int last_post_itn_char_pos;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
