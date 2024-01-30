@class NSString, NSArray;

@interface BLHLSGroup : NSObject

@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSArray *media;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupID:(id)a0 media:(id)a1;

@end
