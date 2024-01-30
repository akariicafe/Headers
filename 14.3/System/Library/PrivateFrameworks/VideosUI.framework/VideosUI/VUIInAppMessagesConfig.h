@class NSArray;

@interface VUIInAppMessagesConfig : NSObject

@property (nonatomic) double minimumPresentationIntervalNormal;
@property (nonatomic) double minimumPresentationIntervalRestricted;
@property (nonatomic) double pageEventDelay;
@property (retain, nonatomic) NSArray *whitelistedFields;

- (id)init;
- (void).cxx_destruct;

@end
