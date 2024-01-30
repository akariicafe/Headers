@class NSString;

@interface _EditScriptRangedAtom : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editRange;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;

@end
