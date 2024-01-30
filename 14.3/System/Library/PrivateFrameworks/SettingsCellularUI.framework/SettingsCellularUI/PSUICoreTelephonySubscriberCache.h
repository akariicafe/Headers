@class NSString, NSMutableDictionary, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict;
@property (retain) NSMutableDictionary *isoCountryCodesDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)initPrivate;
- (id)init;
- (void)prlVersionDidChange:(id)a0 version:(id)a1;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (id)shortLabel:(id)a0;
- (void)fetchMobileEquipmentInfo;
- (void)fetchCountryCodes;
- (id)mobileEquipmentInfo:(id)a0;
- (unsigned long long)mobileEquipmentInfoLength;
- (id)isoCountryCode:(id)a0;

@end
