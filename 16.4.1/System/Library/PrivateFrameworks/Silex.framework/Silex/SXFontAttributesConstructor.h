@class NSString;
@protocol SXFontIndex;

@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor>

@property (readonly, nonatomic) id<SXFontIndex> fontIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fontAttributesForFontDescriptions:(id)a0;
- (id)fontFaceForAttributes:(id)a0 size:(long long)a1;
- (id)fontNameForAttributes:(id)a0 size:(long long)a1;
- (id)initWithFontIndex:(id)a0;
- (long long)weightByApplyingWeightLabels:(id)a0 toWeight:(long long)a1;

@end
