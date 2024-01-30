@class NSString, NSUserActivity;

@interface SGEventActivity : NSObject

@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) double validStartDate;
@property (readonly, nonatomic) double validEndDate;

+ (id)describeType:(unsigned char)a0;
+ (unsigned char)typeForString:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (id)initWithTeamIdentifier:(id)a0 type:(unsigned char)a1 userActivity:(id)a2 validStartDate:(double)a3 validEndDate:(double)a4;

@end
