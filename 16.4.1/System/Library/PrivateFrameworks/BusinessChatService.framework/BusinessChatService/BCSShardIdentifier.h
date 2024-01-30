@class NSString;

@interface BCSShardIdentifier : NSObject <BCSFilterShardItemIdentifying, NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long shardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
