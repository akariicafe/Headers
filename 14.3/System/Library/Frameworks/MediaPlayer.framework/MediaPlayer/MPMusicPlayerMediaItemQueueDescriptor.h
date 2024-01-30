@class MPMediaItem, MPMediaQuery, MPMediaItemCollection;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMediaQuery *_query;
    MPMediaItemCollection *_itemCollection;
}

@property (readonly, copy, nonatomic) MPMediaQuery *query;
@property (readonly, nonatomic) MPMediaItemCollection *itemCollection;
@property (retain, nonatomic) MPMediaItem *startItem;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemCollection:(id)a0;
- (void)setStartTime:(double)a0 forItem:(id)a1;
- (void)setEndTime:(double)a0 forItem:(id)a1;
- (id)initWithQuery:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
