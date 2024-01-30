@class NSString, TSKSelection;
@protocol TSDCanvasSelection;

@interface KNArchivedCanvasSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSKSelection<TSDCanvasSelection> *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
