@class NSString, FCObservable;

@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider>

@property (readonly, nonatomic) FCObservable *tempObservableHeaderBlueprint;
@property (readonly, nonatomic) FCObservable *tempObservableFooterBlueprint;
@property (readonly, nonatomic) FCObservable *tempObservableContentOverlayBlueprintData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)observableHeaderBlueprint;
- (id)observableFooterBlueprint;
- (id)observableContentOverlayBlueprintData;

@end
