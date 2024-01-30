@class NSURL, NSSet;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKKeyedDataStoreProtocol;

@interface CRKASMPreemptiveIDSMessagingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) id<CRKIDSAddressTranslator> IDSAddressTranslator;
@property (readonly, nonatomic) id<CRKKeyedDataStoreProtocol> dataStore;
@property (readonly, nonatomic) NSURL *messagedAppleIDsURL;
@property (retain, nonatomic) NSSet *messagedAppleIDs;
@property (nonatomic, getter=isObservingRoster) BOOL observingRoster;

+ (id)observedKeyPaths;
+ (id)trustedUserAppleIDsFromRoster:(id)a0;
+ (id)appleIDsFromData:(id)a0 error:(id *)a1;
+ (id)dataForAppleIDs:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)endObservingRoster;
- (void)beginObservingRoster;
- (void)rosterDidChange;
- (id)fetchMessagedAppleIDsWitherror:(id *)a0;
- (BOOL)persistAppleIDs:(id)a0 withError:(id *)a1;
- (void)messageAppleID:(id)a0;
- (id)initWithRosterProvider:(id)a0 IDSPrimitives:(id)a1 IDSAddressTranslator:(id)a2 dataStore:(id)a3;

@end
