@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;
@protocol TSWPStyleProviding;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TSCH3DLabelBitmapContextInfo *bitmapContextInfo;
@property (readonly, nonatomic) double labelWidth;
@property (readonly, nonatomic) double renderSamples;
@property (readonly, weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;

+ (id)labelAttributesWithParagraphStyle:(id)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3 renderSamples:(double)a4 styleProvidingSource:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParagraphStyle:(id)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3 renderSamples:(double)a4 styleProvidingSource:(id)a5;

@end
