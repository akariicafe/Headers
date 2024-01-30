@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) struct _MRTextInputTraits { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { long long x0; long long x1; } x5; BOOL x6; BOOL x7; long long x8[10]; unsigned long long x9; } inputTraits;

- (void)setPrompt:(id)a0;
- (void)setTitle:(id)a0;
- (void)setInputTraits:(struct _MRTextInputTraits { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { long long x0; long long x1; } x5; BOOL x6; BOOL x7; long long x8[10]; unsigned long long x9; })a0;

@end
