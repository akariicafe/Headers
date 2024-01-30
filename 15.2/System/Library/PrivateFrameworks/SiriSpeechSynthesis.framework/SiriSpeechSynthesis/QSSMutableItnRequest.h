@class NSString, NSArray;

@interface QSSMutableItnRequest : QSSItnRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *words_list;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
