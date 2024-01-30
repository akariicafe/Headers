@class NSString, NSArray;

@interface ASInvitationMailContext : NSObject

@property (retain, nonatomic) NSString *eventUID;
@property (retain, nonatomic) NSString *serverID;
@property (nonatomic) BOOL isMyInvite;
@property (nonatomic) int emailResponse;
@property (retain, nonatomic) NSArray *attendeeUUIDs;

- (void).cxx_destruct;

@end
