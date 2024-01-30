@class NSDictionary, SXComponents, SXDOMAnalysis, SXMetadata;
@protocol SXDocumentStyle, SXAutoPlacement;

@interface SXDOM : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) SXComponents *components;
@property (readonly, copy, nonatomic) NSDictionary *textStyles;
@property (readonly, copy, nonatomic) NSDictionary *componentStyles;
@property (readonly, copy, nonatomic) NSDictionary *componentLayouts;
@property (readonly, copy, nonatomic) NSDictionary *componentTextStyles;
@property (readonly, copy, nonatomic) NSDictionary *resources;
@property (readonly, nonatomic) id<SXAutoPlacement> autoPlacement;
@property (readonly, nonatomic) id<SXDocumentStyle> documentStyle;
@property (readonly, copy, nonatomic) SXDOMAnalysis *analysis;
@property (readonly, nonatomic) SXMetadata *metadata;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithComponents:(id)a0 componentLayouts:(id)a1 componentStyles:(id)a2 componentTextStyles:(id)a3 textStyles:(id)a4 resources:(id)a5 autoPlacement:(id)a6 documentStyle:(id)a7 analysis:(id)a8 metadata:(id)a9;

@end
