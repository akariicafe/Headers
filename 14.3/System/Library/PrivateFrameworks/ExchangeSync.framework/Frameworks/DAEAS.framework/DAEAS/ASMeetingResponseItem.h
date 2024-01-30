@class NSString, ASEventUID, NSDate;

@interface ASMeetingResponseItem : NSObject

@property (retain, nonatomic) NSString *deliveryItemFolderId;
@property (retain, nonatomic) NSString *deliveryItemServerId;
@property (nonatomic) int meetingResponse;
@property (retain, nonatomic) ASEventUID *eventUID;
@property (retain, nonatomic) NSDate *instanceDate;
@property (retain, nonatomic) NSString *calEventServerId;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSDate *proposedStartTime;
@property (retain, nonatomic) NSDate *proposedEndTime;
@property (nonatomic) BOOL responseRequested;
@property (retain, nonatomic) id context;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDeliveryItemFolderId:(id)a0 deliveryItemServerId:(id)a1 instanceDate:(id)a2 meetingResponse:(int)a3 eventUID:(id)a4 responseComment:(id)a5 responseRequested:(BOOL)a6 proposedStartTime:(id)a7 proposedEndTime:(id)a8;

@end
