@class NSString;

@interface PXPhotosBarsItemIdentifierProviderGeneric : PXPhotosBarsItemIdentifierProviderBase <PXPhotosBarsItemIdentifierProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)valuesForModel:(id)a0 title:(id *)a1 leadingIdentifiers:(id *)a2 trailingIdentifiers:(id *)a3 toolbarIdentifiers:(id *)a4;


@end
