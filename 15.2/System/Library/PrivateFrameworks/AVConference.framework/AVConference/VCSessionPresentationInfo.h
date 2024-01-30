@interface VCSessionPresentationInfo : NSObject <NSSecureCoding> {
    unsigned int _displayID;
    struct CGSize { double width; double height; } _displaySize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _appWindowRect;
    unsigned int _uiLayout;
    struct tagVCSpatialAudioMetadataGlobalInfo { unsigned int displayID; float displayWidth; float displayHeight; float appWindowWidth; float appWindowHeight; float appWindowPositionX; float appWindowPositionY; unsigned int uiLayout; unsigned int uiState; } _metadataGlobalInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasPendingChanges;
@property (nonatomic) struct tagAVCSessionPresentationInfo { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned int x1; unsigned int x2; unsigned char x3; } avcSessionPresentationInfo;
@property (readonly, nonatomic) const struct tagVCSpatialAudioMetadataGlobalInfo { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; unsigned int x7; unsigned int x8; } *metadataGlobalInfo;
@property (readonly, nonatomic) unsigned char uiState;

+ (unsigned int)avcLayoutWithLayout:(unsigned int)a0;
+ (unsigned char)avcUIStateWithUIState:(unsigned char)a0;
+ (unsigned char)uiStateWithAVCUIState:(unsigned char)a0;
+ (unsigned int)layoutWithAVCLayout:(unsigned int)a0;
+ (unsigned int)metadataSateWithUIState:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)description;
- (void)setDisplayID:(unsigned int)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)unserialize:(id)a0;

@end
