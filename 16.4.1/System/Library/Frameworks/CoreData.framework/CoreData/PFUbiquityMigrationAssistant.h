@class NSString, PFUbiquityLocation, NSMutableDictionary, NSMutableArray;

@interface PFUbiquityMigrationAssistant : NSObject {
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSString *_currentModelVersionHash;
}

- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)a0 peerID:(id)a1 ubiquityName:(id)a2 modelVersionHash:(id)a3;

@end
