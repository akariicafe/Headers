@class VUIFamilySharingRelationship, VUIFamilySharingPlaybackPositionRelationship;

@interface VUIFamilySharingRelationships : NSObject

@property (retain, nonatomic) VUIFamilySharingRelationship *season;
@property (retain, nonatomic) VUIFamilySharingRelationship *show;
@property (retain, nonatomic) VUIFamilySharingPlaybackPositionRelationship *playbackPosition;

- (void).cxx_destruct;

@end
