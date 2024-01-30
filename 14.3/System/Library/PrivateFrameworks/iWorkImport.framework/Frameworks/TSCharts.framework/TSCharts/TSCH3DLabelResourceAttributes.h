@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TSCH3DLabelBitmapContextInfo *bitmapContextInfo;
@property (readonly, nonatomic) double labelWidth;
@property (readonly, nonatomic) double renderSamples;

+ (id)labelAttributesWithParagraphStyle:(id)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3 renderSamples:(double)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithParagraphStyle:(id)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3 renderSamples:(double)a4;

@end
