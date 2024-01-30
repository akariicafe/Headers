@class NSString, NSArray, NSNumber;

@interface WLKPlayActivityMetadata : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) NSString *externalShowID;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSString *canonicalShowID;
@property (readonly, nonatomic) NSString *internalLegID;
@property (readonly, nonatomic) NSString *overrideChannelID;
@property (readonly, copy, nonatomic) NSArray *siriActionsCategories;
@property (readonly, copy, nonatomic) NSNumber *isCurrentEpisode;
@property (readonly, copy, nonatomic) NSNumber *isShowClosed;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *nowPlayingPassThrough;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 dictionary:(id)a1;

@end
