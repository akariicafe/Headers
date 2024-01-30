@class NSString, MPMediaItem;

@interface _MPMusicPlayerMediaItemProxy : NSProxy

@property (readonly, nonatomic) MPMediaItem *item;
@property (readonly, nonatomic) NSString *itemIdentifier;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0 item:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
