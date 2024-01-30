@class NSMutableDictionary, NSMutableArray;
@protocol BMBookmark;

@interface ATXStackStateTrackerInternalState : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableDictionary *stackStateByStackId;
@property (retain, nonatomic) NSMutableDictionary *cachedStackLayoutsByBlendingUpdateUUID;
@property (retain, nonatomic) NSMutableArray *blendingCacheUpdateUUIDs;
@property (retain, nonatomic) id<BMBookmark> bookmark;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
