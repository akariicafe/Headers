@class NSString, NSSet;

@interface NTKArgonChannelID : NSObject

@property (class, readonly, nonatomic) NSString *currentChannelID;
@property (class, readonly, nonatomic) NSSet *allChannelIDs;

@end
