@class NSString, AFPeerInfo;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {
    AFPeerInfo *_baseModel;
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    BOOL _isCommunalDevice;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsDeviceOwnedByCurrentUser : 1; unsigned char hasIdsIdentifier : 1; unsigned char hasIdsDeviceUniqueIdentifier : 1; unsigned char hasRapportEffectiveIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasIsCommunalDevice : 1; unsigned char hasRoomName : 1; unsigned char hasName : 1; unsigned char hasProductType : 1; unsigned char hasBuildVersion : 1; unsigned char hasUserInterfaceIdiom : 1; unsigned char hasAceVersion : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMediaRouteIdentifier:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setName:(id)a0;
- (id)init;
- (void)setUserInterfaceIdiom:(id)a0;
- (void).cxx_destruct;
- (void)setIdsIdentifier:(id)a0;
- (id)generate;
- (void)setProductType:(id)a0;
- (void)setMediaSystemIdentifier:(id)a0;
- (void)setRoomName:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setIsDeviceOwnedByCurrentUser:(BOOL)a0;
- (void)setIdsDeviceUniqueIdentifier:(id)a0;
- (void)setRapportEffectiveIdentifier:(id)a0;
- (void)setIsCommunalDevice:(BOOL)a0;
- (void)setAceVersion:(id)a0;

@end
