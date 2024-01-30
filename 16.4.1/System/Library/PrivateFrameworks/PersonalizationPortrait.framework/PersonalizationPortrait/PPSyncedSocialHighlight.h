@class NSDate, NSString, PPSocialHighlight;

@interface PPSyncedSocialHighlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPSocialHighlight *highlight;
@property (readonly, nonatomic) NSDate *rankingDate;
@property (readonly, nonatomic) NSString *originatingDeviceId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0 rankingDate:(id)a1 originatingDeviceId:(id)a2;

@end
