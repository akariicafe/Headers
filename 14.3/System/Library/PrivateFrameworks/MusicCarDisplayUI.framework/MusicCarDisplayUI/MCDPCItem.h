@class NSString, UIImage, NSData, MCDPCModel;

@interface MCDPCItem : NSObject

@property (readonly, weak, nonatomic) MCDPCModel *model;
@property (nonatomic) void *contentItem;
@property (nonatomic) BOOL currentlyPlaying;
@property (retain, nonatomic) UIImage *artworkImage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSData *artworkData;
@property (readonly, nonatomic) float playbackProgress;
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) BOOL isContainer;
@property (readonly, nonatomic) BOOL isCloudItem;
@property (readonly, nonatomic) BOOL isExplicitItem;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_initWithModel:(id)a0 MRContentItem:(void *)a1;

@end
