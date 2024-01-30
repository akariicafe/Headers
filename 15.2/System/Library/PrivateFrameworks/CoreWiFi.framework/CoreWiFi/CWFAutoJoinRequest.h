@class NSUUID, CWFAutoJoinParameters;

@interface CWFAutoJoinRequest : NSObject

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFAutoJoinParameters *parameters;
@property (copy, nonatomic) id /* block */ reply;

- (id)description;
- (void).cxx_destruct;

@end
