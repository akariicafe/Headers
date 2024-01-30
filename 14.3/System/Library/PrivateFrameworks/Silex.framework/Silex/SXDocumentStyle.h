@class UIColor, NSString, SXJSONArray, SXJSONLinearGradient;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (readonly, nonatomic) UIColor *topBackgroundColor;
@property (readonly, nonatomic) SXJSONLinearGradient *topBackgroundGradient;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SXJSONArray *conditional;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;


@end
