@class SXMutableComponents, NSMutableDictionary, SXMutableDOMAnalysis, SXMetadata;
@protocol SXDocumentStyle, SXAutoPlacement;

@interface SXMutableDOM : SXDOM

@property (readonly, copy, nonatomic) SXMutableComponents *components;
@property (readonly, copy, nonatomic) NSMutableDictionary *textStyles;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentStyles;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentLayouts;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentTextStyles;
@property (readonly, copy, nonatomic) NSMutableDictionary *resources;
@property (retain, nonatomic) id<SXAutoPlacement> autoPlacement;
@property (retain, nonatomic) id<SXDocumentStyle> documentStyle;
@property (copy, nonatomic) SXMutableDOMAnalysis *analysis;
@property (readonly, copy, nonatomic) SXMetadata *metadata;

- (id)initWithComponents:(id)a0 componentLayouts:(id)a1 componentStyles:(id)a2 componentTextStyles:(id)a3 textStyles:(id)a4 resources:(id)a5 autoPlacement:(id)a6 documentStyle:(id)a7 analysis:(id)a8 metadata:(id)a9;

@end
