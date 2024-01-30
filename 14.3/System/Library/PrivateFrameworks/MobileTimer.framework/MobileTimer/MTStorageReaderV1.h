@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>

@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

@end
