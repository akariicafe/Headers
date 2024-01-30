@class NSString;

@interface _UISheetPresentationControllerAppearance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isDimmingAlwaysVisible) BOOL _dimmingAlwaysVisible;
@property (readonly, nonatomic) BOOL _prefersDimmingVisible;
@property (readonly, nonatomic) NSString *_largestUndimmedDetentIdentifier;
@property (readonly, nonatomic) NSString *_smallestDimmedDetentIdentifier;

+ (id)appearanceWithLargestUndimmedDetentIdentifier:(id)a0;
+ (id)appearanceWithSmallestDimmedDetentIdentifier:(id)a0;
+ (id)appearancePreferringDimmingVisible:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
