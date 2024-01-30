@class ATXHomeScreenEvent, ATXSuggestionLayout, NSDate;

@interface ATXStackState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXHomeScreenEvent *stackCreationEvent;
@property (retain, nonatomic) ATXHomeScreenEvent *lastStackRotationEvent;
@property (retain, nonatomic) ATXHomeScreenEvent *lastStackShownEvent;
@property (retain, nonatomic) ATXHomeScreenEvent *lastUserScrollStackRotationEvent;
@property (retain, nonatomic) ATXSuggestionLayout *layoutForLastStalenessRotation;
@property (retain, nonatomic) NSDate *dateOfLastStalenessRotation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
