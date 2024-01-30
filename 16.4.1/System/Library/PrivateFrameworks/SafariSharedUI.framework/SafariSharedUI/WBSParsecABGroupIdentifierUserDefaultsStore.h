@class NSNumber, NSString, NSDate;
@protocol WBSParsecABGroupStoreClient;

@interface WBSParsecABGroupIdentifierUserDefaultsStore : NSObject <WBSParsecABGroupStore>

@property (weak, nonatomic) id<WBSParsecABGroupStoreClient> client;
@property (retain, nonatomic) NSNumber *groupIdentifier;
@property (retain, nonatomic) NSDate *generationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
