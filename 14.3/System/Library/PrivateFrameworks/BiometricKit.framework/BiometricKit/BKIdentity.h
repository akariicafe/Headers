@class NSUUID, NSString, NSDate, BKDevice;

@interface BKIdentity : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) BKDevice *device;

+ (id)identity;

- (void).cxx_destruct;
- (BOOL)isEqualToIdentity:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithServerIdentity:(id)a0 device:(id)a1;
- (id)serverIdentity;

@end
