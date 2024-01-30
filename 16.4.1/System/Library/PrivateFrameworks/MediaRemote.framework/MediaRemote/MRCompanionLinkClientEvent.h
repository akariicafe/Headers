@class NSString, NSDictionary;

@interface MRCompanionLinkClientEvent : NSObject

@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) NSString *uid;

- (void).cxx_destruct;

@end
