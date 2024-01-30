@class NSString, NSArray;

@interface FCDemoGroupConfig : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long demoGroupType;
@property (readonly, copy, nonatomic) NSString *topicID;
@property (readonly, copy, nonatomic) NSArray *articleIDs;
@property (readonly, copy, nonatomic) NSArray *tagIDs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
