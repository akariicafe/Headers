@class NSString;

@interface SXOEmbedRichResponse : SXOEmbedResponse

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;

@end
