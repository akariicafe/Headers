@class NSString;

@interface TLKFormattedText : TLKFormattedTextItem

@property (nonatomic) long long verticalTextAlignment;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) unsigned long long maxLines;

+ (id)formattedTextWithString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasContent;

@end
