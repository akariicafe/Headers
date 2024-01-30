@class NSNumber, NSDate;

@interface VUIFamilySharingPlaybackPositionRelationship : VUIFamilySharingRelationship

@property (retain, nonatomic) NSNumber *positionInMilliseconds;
@property (retain, nonatomic) NSDate *recordedAtTimestamp;

- (void).cxx_destruct;

@end
