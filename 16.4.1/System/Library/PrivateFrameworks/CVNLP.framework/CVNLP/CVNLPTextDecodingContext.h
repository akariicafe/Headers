@class NSString;

@interface CVNLPTextDecodingContext : NSObject

@property (readonly, nonatomic) NSString *history;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } activeRange;

- (id)initWithHistory:(id)a0;
- (void).cxx_destruct;
- (id)activeSubstring;
- (id)inactiveSubstring;
- (id)initWithHistory:(id)a0 activeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
