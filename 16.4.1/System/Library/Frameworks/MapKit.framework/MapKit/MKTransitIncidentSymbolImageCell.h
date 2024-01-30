@class MKTransitIncidentViewModel, NSString, MKTransitIncidentItemCellBackgroundView;

@interface MKTransitIncidentSymbolImageCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
}

@property (retain, nonatomic) MKTransitIncidentViewModel *viewModel;
@property (nonatomic) long long cellPosition;
@property (nonatomic) BOOL padBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_configureWithMessage:(id)a0 referenceDate:(id)a1 lastUpdated:(id)a2 incidentIsBlocking:(BOOL)a3 shouldShowImage:(BOOL)a4 inSiri:(BOOL)a5;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(BOOL)a3 inSiri:(BOOL)a4;

@end
