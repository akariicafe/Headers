@class KNActionGhostSelection, NSString;

@interface KNArchivedActionGhostSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) KNActionGhostSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
