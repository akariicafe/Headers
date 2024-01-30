@class NSString, NSArray, CLLocation, INSpeakableString, NSNumber;

@interface SpeakableLocation : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) INSpeakableString *name;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (nonatomic, copy) NSString *thoroughfare;
@property (nonatomic, copy) NSString *fullThoroughfare;
@property (nonatomic, retain) INSpeakableString *locality;
@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, retain) NSNumber *isCoarse;
@property (nonatomic, copy) NSArray *areasOfInterest;
@property (nonatomic, copy) NSString *label;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
