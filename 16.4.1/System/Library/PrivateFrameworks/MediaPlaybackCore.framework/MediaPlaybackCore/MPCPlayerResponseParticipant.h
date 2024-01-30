@class MPCPlayerResponse, NSString, MPModelSharedListeningParticipant;

@interface MPCPlayerResponseParticipant : NSObject <NSObject>

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) MPModelSharedListeningParticipant *modelObject;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
