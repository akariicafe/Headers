@class NSString;

@interface WFSyntaxHighlightToken : NSObject <WFSyntaxHighlightToken>

@property BOOL overflows;
@property (retain) NSString *string;
@property int start;
@property int length;

+ (id)constructToken;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void).cxx_destruct;
- (id)description;

@end
