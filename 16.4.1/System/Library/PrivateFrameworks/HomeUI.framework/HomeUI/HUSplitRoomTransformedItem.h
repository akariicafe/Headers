@class NSString, NAIdentity, HMRoom;

@interface HUSplitRoomTransformedItem : HFAccessoryRepresentableTransformItem <NSCopying, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) HMRoom *room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionBuilder;
- (id)initWithSourceItem:(id)a0 room:(id)a1;
- (id)updateWithOptions:(id)a0;

@end
