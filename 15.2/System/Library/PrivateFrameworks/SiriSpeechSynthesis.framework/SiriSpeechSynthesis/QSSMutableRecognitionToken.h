@class NSString;

@interface QSSMutableRecognitionToken : QSSRecognitionToken

@property (copy, nonatomic) NSString *token_text;
@property (nonatomic) int start_milli_seconds;
@property (nonatomic) int end_milli_seconds;
@property (nonatomic) int silence_start_milli_seconds;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL add_space_after;
@property (copy, nonatomic) NSString *phone_seq;
@property (copy, nonatomic) NSString *ipa_phone_seq;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
