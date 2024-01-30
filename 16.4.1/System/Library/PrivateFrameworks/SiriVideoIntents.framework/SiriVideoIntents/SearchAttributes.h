@class NSNumber;

@interface SearchAttributes : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *isUhd;
@property (nonatomic, retain) NSNumber *isDolbyVision;
@property (nonatomic, retain) NSNumber *isDolbyAtmos;
@property (nonatomic, retain) NSNumber *isHdr;
@property (nonatomic, retain) NSNumber *isFree;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
