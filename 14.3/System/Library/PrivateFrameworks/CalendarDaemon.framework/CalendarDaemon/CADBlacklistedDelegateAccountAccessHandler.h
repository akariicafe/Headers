@class NSSet, NSObject;
@protocol OS_dispatch_queue, CADCalCalendarInfoProvider, CADCalStoreInfoProvider;

@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler>

@property (readonly, nonatomic) id<CADCalStoreInfoProvider> calStoreInfoProvider;
@property (readonly, nonatomic) id<CADCalCalendarInfoProvider> calCalendarInfoProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSSet *cachedDelegateCalStoreInfos;

- (BOOL)isAccountManaged:(id)a0;
- (BOOL)isActionAllowed:(unsigned long long)a0 forAccountIdentifier:(id)a1;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithCalStoreInfoProvider:(id)a0 calendarInfoProvider:(id)a1;
- (id)_delegateCalStoreInfos;

@end
