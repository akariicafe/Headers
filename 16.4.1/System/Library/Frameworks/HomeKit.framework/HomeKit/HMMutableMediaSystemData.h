@class NSString, NSUUID;

@interface HMMutableMediaSystemData : HMMediaSystemData

@property (copy) NSString *name;
@property (getter=isDefaultName) BOOL defaultName;
@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSUUID *rightDestinationIdentifier;
@property (copy) NSUUID *associatedGroupIdentifier;

@end
