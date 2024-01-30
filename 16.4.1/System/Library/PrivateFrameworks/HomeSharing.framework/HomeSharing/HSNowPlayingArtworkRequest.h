@interface HSNowPlayingArtworkRequest : HSRequest

@property (readonly, nonatomic) unsigned int interfaceID;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) unsigned int playQueueIndex;

- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithInterfaceID:(unsigned int)a0 maximumSize:(struct CGSize { double x0; double x1; })a1 playQueueIndex:(unsigned int)a2;

@end
