@class NSString;

@interface ChannelCheckpoint : NSManagedObject

@property (class, readonly, nonatomic) NSString *identifierKeyPath;

@property (copy, nonatomic) NSString *channelID;
@property (nonatomic) long long checkpoint;

+ (id)fetchRequest;
+ (id)predicateForChannelIdentifier:(id)a0;

@end
