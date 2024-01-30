@class NSString, NSArray, BlastDoorBasicTapBack_MessageSummaryInfo;

@interface BlastDoorBasicTapBack : NSObject {
    void /* unknown type, empty encoding */ basicTapBack;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) BlastDoorBasicTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSString *plainTextBody;

- (id)init;
- (void).cxx_destruct;

@end
