@class NSString;

@interface MFReformattedAddress : NSObject {
    NSString *_address;
}

@property (readonly, nonatomic) NSString *localPart;
@property (readonly, nonatomic) NSString *domainPart;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } middleTruncationRange;

- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)attributedStringWithFontSize:(double)a0 maximumWidth:(double)a1 options:(unsigned long long)a2;
- (double)widthWithFontSize:(double)a0 maximumWidth:(double)a1 options:(unsigned long long)a2;
- (id)description;

@end
