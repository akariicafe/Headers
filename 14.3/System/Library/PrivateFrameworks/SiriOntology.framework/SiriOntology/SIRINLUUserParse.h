@class NSArray, NSUUID, NSString;

@interface SIRINLUUserParse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSUUID *nsUUID;
@property (retain, nonatomic) NSString *parserId;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 nsUUID:(id)a2 parserId:(id)a3;

@end
