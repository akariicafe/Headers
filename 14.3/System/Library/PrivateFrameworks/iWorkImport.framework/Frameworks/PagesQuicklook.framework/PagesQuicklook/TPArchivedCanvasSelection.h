@class NSString, TPCanvasSelection;

@interface TPArchivedCanvasSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TPCanvasSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
