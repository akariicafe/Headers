@class NSUUID, NSString, NSDate, BKDevice;

@interface BKIdentity : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) BKDevice *device;
@property (nonatomic) BOOL hasPeriocularEnrollment;
@property (nonatomic) BOOL hasPeriocularEnrollmentWithGlasses;
@property (nonatomic) BOOL canAddPeriocularEnrollment;
@property (nonatomic) long long secondaryPeriocularEnrollments;

+ (id)identity;

- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)serverIdentity;
- (id)initWithServerIdentity:(id)a0 device:(id)a1;

@end
