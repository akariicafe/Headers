@class NSString;

@interface TLKFormattedText : TLKFormattedTextItem

@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) long long color;
@property (nonatomic) long long verticalTextAlignment;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) unsigned long long maxLines;

+ (id)formattedTextWithString:(id)a0;

- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)description;

@end
