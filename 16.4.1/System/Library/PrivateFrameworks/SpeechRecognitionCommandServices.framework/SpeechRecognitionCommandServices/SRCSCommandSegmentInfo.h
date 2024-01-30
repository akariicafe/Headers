@class NSString;

@interface SRCSCommandSegmentInfo : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *text;

+ (id)segmentInfoWith:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 text:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
