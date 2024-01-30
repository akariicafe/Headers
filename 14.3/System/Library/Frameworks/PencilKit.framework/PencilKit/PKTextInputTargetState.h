@class NSString, PKTextInputHandwritingShot, NSUUID, CHTextInputQueryItem, NSNumber;

@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting>

@property (copy, nonatomic) NSNumber *elementRecognitionIdentifier;
@property (retain, nonatomic) CHTextInputQueryItem *lastQueryItem;
@property (retain, nonatomic) PKTextInputHandwritingShot *handwritingShot;
@property (copy, nonatomic) NSNumber *writingSessionIdentifier;
@property (copy, nonatomic) NSString *uncommittedPendingText;
@property (copy, nonatomic) NSString *activePreviewText;
@property (nonatomic) long long sessionCommitLength;
@property (nonatomic) long long lastCommittedCharacterLevelPosition;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inProgressGestureInitialSelectedRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inProgressGestureSelectionRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inProgressGestureRangeToDelete;
@property (retain, nonatomic) NSUUID *inProgressGestureStrokeUUID;
@property (nonatomic) double inProgressGestureStartTimestamp;
@property (nonatomic) double lastUpdateTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;

@end
