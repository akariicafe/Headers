@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject

@property (retain, nonatomic) NSArray *nowPlayingIdentifiers;
@property (readonly, nonatomic) NSArray *firstPartyAppBundleIDs;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
