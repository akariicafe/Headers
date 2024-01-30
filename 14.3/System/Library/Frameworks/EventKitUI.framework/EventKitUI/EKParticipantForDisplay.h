@class NSMutableAttributedString;

@interface EKParticipantForDisplay : NSObject

@property (retain, nonatomic) NSMutableAttributedString *displayString;
@property (nonatomic, getter=isOptionalParticipant) BOOL optionalParticipant;

- (void).cxx_destruct;

@end
