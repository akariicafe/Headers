@interface SFPrivacyReportGridRowLayoutInfo : NSObject

@property (readonly, nonatomic) long long row;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } itemRange;
@property (nonatomic) double height;

- (id)initWithRow:(long long)a0 itemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
