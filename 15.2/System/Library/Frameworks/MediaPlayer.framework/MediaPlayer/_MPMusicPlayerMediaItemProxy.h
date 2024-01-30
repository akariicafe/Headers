@class NSString, MPMediaItem;

@interface _MPMusicPlayerMediaItemProxy : NSProxy

@property (readonly, nonatomic) MPMediaItem *item;
@property (readonly, nonatomic) NSString *itemIdentifier;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithItemIdentifier:(id)a0 item:(id)a1;

@end
