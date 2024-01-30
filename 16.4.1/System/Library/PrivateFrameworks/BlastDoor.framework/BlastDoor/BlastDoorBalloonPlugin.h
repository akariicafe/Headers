@class NSString, NSArray, BlastDoorBalloonPluginPayloadWrapper, NSAttributedString;

@interface BlastDoorBalloonPlugin : NSObject {
    void /* unknown type, empty encoding */ balloonPlugin;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) BOOL isExpirable;
@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) BOOL has_associatedMessageRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (nonatomic, readonly) BOOL has_associatedMessageType;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSArray *attachments;

- (id)init;
- (void).cxx_destruct;

@end
