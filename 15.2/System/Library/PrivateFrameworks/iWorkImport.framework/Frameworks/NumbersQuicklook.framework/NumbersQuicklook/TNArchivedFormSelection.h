@class NSString, TNFormViewerSelection;

@interface TNArchivedFormSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TNFormViewerSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
