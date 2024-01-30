@class NSString;

@interface FTMutableSpan : FTSpan

@property (nonatomic) int start_index;
@property (nonatomic) int end_index;
@property (nonatomic) BOOL do_not_translate;
@property (copy, nonatomic) NSString *meta_info;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
