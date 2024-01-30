@class NSString, NSArray, BlastDoorMessage;

@interface BlastDoorSticker : NSObject {
    void /* unknown type, empty encoding */ sticker;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) BOOL has_associatedMessageRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (nonatomic, readonly) BlastDoorMessage *messageContent;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (id)init;
- (void).cxx_destruct;

@end
