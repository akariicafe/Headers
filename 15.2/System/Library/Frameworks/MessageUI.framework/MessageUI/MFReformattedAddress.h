@class NSString;

@interface MFReformattedAddress : NSObject {
    NSString *_address;
}

@property (readonly, nonatomic) NSString *localPart;
@property (readonly, nonatomic) NSString *domainPart;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } middleTruncationRange;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (id)attributedStringWithFontSize:(double)a0 maximumWidth:(double)a1 options:(unsigned long long)a2;
- (double)widthWithFontSize:(double)a0 maximumWidth:(double)a1 options:(unsigned long long)a2;

@end
