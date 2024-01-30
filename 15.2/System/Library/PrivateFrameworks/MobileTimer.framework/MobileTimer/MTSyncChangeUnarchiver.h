@class NSCoder;

@interface MTSyncChangeUnarchiver : NSKeyedUnarchiver <MTSerializer>

@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

@end
