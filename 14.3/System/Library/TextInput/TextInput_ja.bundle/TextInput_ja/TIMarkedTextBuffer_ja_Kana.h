@class NSString;

@interface TIMarkedTextBuffer_ja_Kana : NSObject <TIMarkedTextBuffer>

@property (readonly, nonatomic) NSString *internalString;
@property (readonly, nonatomic) long long internalIndex;
@property (readonly, nonatomic) NSString *externalString;
@property (nonatomic) long long externalIndex;

- (void).cxx_destruct;
- (id)initWithInternalString:(id)a0;
- (void)setInternalString:(id)a0 withInputIndex:(long long)a1;
- (void)deleteFromInput:(long long *)a0 newInput:(id *)a1 inputIndex:(long long *)a2;

@end
