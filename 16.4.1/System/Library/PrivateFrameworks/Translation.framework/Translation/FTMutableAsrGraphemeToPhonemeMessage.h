@class FTGraphemeToPhonemeResponse, FTGraphemeToPhonemeRequest, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableAsrGraphemeToPhonemeMessage : FTAsrGraphemeToPhonemeMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTGraphemeToPhonemeRequest *session_messageAsFTGraphemeToPhonemeRequest;
@property (copy, nonatomic) FTGraphemeToPhonemeResponse *session_messageAsFTGraphemeToPhonemeResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setSession_message:(id)a0;

@end
