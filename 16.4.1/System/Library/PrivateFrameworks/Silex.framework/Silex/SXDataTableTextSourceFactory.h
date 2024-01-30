@class NSString;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>

@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory;
@property (readonly, nonatomic) id<SXDocumentLanguageProviding> documentLanguageProvider;
@property (readonly, nonatomic) id<SXFontAttributesConstructor> fontAttributesConstructor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSmartFieldFactory:(id)a0 documentLanguageProvider:(id)a1 fontAttributesConstructor:(id)a2;
- (id)textSourceWithFormattedText:(id)a0 indexPath:(struct { unsigned long long x0; unsigned long long x1; })a1 dataSource:(id)a2;

@end
