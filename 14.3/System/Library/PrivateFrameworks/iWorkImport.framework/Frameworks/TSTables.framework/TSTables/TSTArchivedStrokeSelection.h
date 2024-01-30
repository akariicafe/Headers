@class NSString, TSTStrokeSelection;

@interface TSTArchivedStrokeSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSTStrokeSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
