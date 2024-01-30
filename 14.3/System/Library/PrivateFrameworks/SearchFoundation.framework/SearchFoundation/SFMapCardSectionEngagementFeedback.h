@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (retain, nonatomic) NSData *modifiedPlacemarkData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
