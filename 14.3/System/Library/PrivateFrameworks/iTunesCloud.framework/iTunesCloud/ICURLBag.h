@class NSDate, NSString, NSArray, ICURLBagRadioConfiguration, NSMutableDictionary, NSDictionary, NSSet, NSObject, ICURLBagLibraryDAAPConfiguration;
@protocol OS_dispatch_queue;

@interface ICURLBag : NSObject

@property (copy, nonatomic) NSDictionary *bagValues;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns;
@property (retain, nonatomic) NSSet *GUIDURLSchemes;
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSDictionary *allValues;
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, nonatomic) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;

- (id)mescalConfigurationForResponse:(id)a0;
- (BOOL)shouldAppendDeviceGUIDForURL:(id)a0;
- (BOOL)hasValueForBagKey:(id)a0;
- (void).cxx_destruct;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)mescalConfigurationForResponseURL:(id)a0;
- (id)mescalConfigurationForRequest:(id)a0;
- (BOOL)_shouldMescalSignBodyForURL:(id)a0 withSignatureConfiguration:(id)a1;
- (id)urlForBagKey:(id)a0;
- (id)_initWithDictionary:(id)a0 expirationDate:(id)a1 serverCorrelationKey:(id)a2 serverEnvironment:(id)a3;
- (BOOL)boolValueForBagKey:(id)a0;
- (long long)int64ValueForBagKey:(id)a0;
- (id)valueForBagKey:(id)a0;
- (id)_initWithPropertyListRepresentation:(id)a0;
- (BOOL)shouldAppendMachineDataHeadersForURL:(id)a0;
- (id)mescalConfigurationForRequestURL:(id)a0;

@end
