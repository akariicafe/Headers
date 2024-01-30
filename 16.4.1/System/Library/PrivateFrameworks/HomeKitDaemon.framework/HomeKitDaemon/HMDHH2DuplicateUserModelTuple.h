@class NSUUID, NSString;

@interface HMDHH2DuplicateUserModelTuple : NSObject

@property (readonly, nonatomic) NSUUID *homeModelID;
@property (readonly, nonatomic) NSString *userMergeID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHomeModelID:(id)a0 userMergeID:(id)a1;

@end
