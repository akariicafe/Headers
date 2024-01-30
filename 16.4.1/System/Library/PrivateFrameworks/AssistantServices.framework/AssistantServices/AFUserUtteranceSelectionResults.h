@class NSNumber, NSString;

@interface AFUserUtteranceSelectionResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *combinedRank;
@property (copy, nonatomic) NSNumber *combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent;
@property (copy, nonatomic) NSNumber *originalRank;
@property (copy, nonatomic) NSNumber *originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
