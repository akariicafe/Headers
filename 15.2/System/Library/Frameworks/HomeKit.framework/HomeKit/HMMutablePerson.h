@class NSUUID, NSString, NSSet;

@interface HMMutablePerson : HMPerson

@property (copy) NSUUID *UUID;
@property (copy) NSString *name;
@property (copy) NSSet *personLinks;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
