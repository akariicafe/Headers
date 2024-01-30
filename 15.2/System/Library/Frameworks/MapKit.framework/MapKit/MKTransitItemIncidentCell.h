@class NSString, MKTransitItemIncidentView;

@interface MKTransitItemIncidentCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitItemIncidentView *_incidentView;
}

@property (nonatomic) long long cellPosition;
@property (nonatomic) BOOL padBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configureViews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(BOOL)a3 inSiri:(BOOL)a4;
- (void)_updateIncidentViewBottomOffset;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setLeadingSeparatorInset:(double)a0;
- (void)setTrailingSeparatorInset:(double)a0;
- (void)setSeparatorHidden:(BOOL)a0;

@end
