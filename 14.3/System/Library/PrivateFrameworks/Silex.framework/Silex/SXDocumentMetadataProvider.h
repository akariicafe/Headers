@class NSString, SXMetadata;
@protocol SXAutoPlacement, SXDocumentProviding;

@interface SXDocumentMetadataProvider : NSObject <SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) id<SXAutoPlacement> autoPlacement;

- (void).cxx_destruct;
- (id)initWithDocumentProvider:(id)a0;

@end
