@interface MCAnalyticsMDMCommandEvent : MCAnalyticsEvent

- (id)initWithCommandName:(id)a0 error:(id)a1 requiresNetworkTethering:(BOOL)a2 isDEP:(BOOL)a3 isSupervised:(BOOL)a4 isUserEnrollment:(BOOL)a5 isSharediPad:(BOOL)a6 isUserChannel:(BOOL)a7;

@end
