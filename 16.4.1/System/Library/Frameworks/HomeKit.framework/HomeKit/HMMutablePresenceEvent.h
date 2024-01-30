@class NSString, NSArray;

@interface HMMutablePresenceEvent : HMPresenceEvent

@property (copy, nonatomic) NSString *presenceType;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) unsigned long long presenceEventType;
@property (nonatomic) unsigned long long presenceUserType;

@end
