@class SHCustomCatalog, NSString, SHCustomCatalogMatcher, SHMutableSignature;
@protocol SHMatcherDelegate;

@interface SHLiveMatcher : NSObject <SHCustomCatalogDelegate, SHMatcher>

@property (retain, nonatomic) SHCustomCatalog *customCatalog;
@property (retain, nonatomic) SHCustomCatalogMatcher *mreMatcher;
@property (retain, nonatomic) SHMutableSignature *rollingSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)startRecognitionForRequest:(id)a0;
- (void)_bufferProduced:(id)a0 atTime:(id)a1;
- (id)initWithCustomCatalog:(id)a0;
- (id)buildRollingSignature;
- (void)buildMREForReferenceSignatures:(id)a0;
- (id)duplicateCustomCatalog:(id)a0 error:(id *)a1;

@end
