@class NSString, CoreTelephonyClient, NSMutableDictionary;

@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) NSMutableDictionary *specifiersDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)carrierBundleChange:(id)a0;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willEnterForeground;
- (void)_clearCache;
- (void)openURLWithSpecifier:(id)a0;
- (void)dialCarrierServiceNumber:(id)a0;
- (id)readPreference:(id)a0;
- (id)newMyAccountSpecifierWithTarget:(id)a0 context:(id)a1;
- (id)newMMSInfoSpecifierWithTarget:(id)a0 context:(id)a1;
- (void)fetchSpecifiers;
- (void)_allowClicks;
- (id)specifiers:(id)a0;

@end
