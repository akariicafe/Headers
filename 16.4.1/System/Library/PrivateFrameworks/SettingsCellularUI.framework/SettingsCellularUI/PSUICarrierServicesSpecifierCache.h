@class NSString, CoreTelephonyClient, NSMutableDictionary;

@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) NSMutableDictionary *specifiersDict;
@property (retain, nonatomic) NSMutableDictionary *mmsInfoSpecifiersDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)carrierBundleChange:(id)a0;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)clearCache;
- (id)getLogger;
- (id)initPrivate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSpecifiers;
- (id)readPreference:(id)a0;
- (void)dialCarrierServiceNumber:(id)a0;
- (id)mmsInfoSpecifierWithTarget:(id)a0 context:(id)a1;
- (id)newMMSInfoSpecifierWithTarget:(id)a0 context:(id)a1;
- (void)openURLWithSpecifier:(id)a0;
- (id)specifiers:(id)a0;

@end
