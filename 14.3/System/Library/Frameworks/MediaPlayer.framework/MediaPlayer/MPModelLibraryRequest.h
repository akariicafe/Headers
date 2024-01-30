@class NSArray, MPMediaLibrary, NSString, MPMediaQuery;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting>

@property (copy, nonatomic) MPMediaQuery *legacyMediaQuery;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (nonatomic) unsigned long long filteringOptions;
@property (copy, nonatomic) NSString *filterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemTranslationContext;
- (id)sectionTranslationContext;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
