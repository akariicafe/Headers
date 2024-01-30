@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult

@property (retain, nonatomic) NSArray *acceptedShares;
@property (retain, nonatomic) NSArray *acceptedShareMetadatas;

- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 acceptedShares:(id)a2 acceptedShareMetadatas:(id)a3 error:(id)a4;
- (void)dealloc;

@end
