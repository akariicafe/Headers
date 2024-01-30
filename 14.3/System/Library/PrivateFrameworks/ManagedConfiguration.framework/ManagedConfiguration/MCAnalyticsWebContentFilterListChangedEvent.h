@interface MCAnalyticsWebContentFilterListChangedEvent : MCAnalyticsEvent

- (id)initWithAutoPermitListChanged:(BOOL)a0 autoPermitListCount:(unsigned long long)a1 blacklistChanged:(BOOL)a2 blacklistCount:(unsigned long long)a3 whitelistChanged:(BOOL)a4 whitelistCount:(unsigned long long)a5;

@end
