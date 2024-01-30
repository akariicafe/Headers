@class NSString;

@interface TLKMultilineText : TLKObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long maxLines;

+ (id)textWithString:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
