@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *participantID;
@property (copy) NSString *detailText;
@property (copy) UIColor *participantColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
