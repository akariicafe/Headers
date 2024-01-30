@class NSNumber, INPerson;

@interface INFriend : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *sharesLocation;
@property (nonatomic, retain) NSNumber *followsMyLocation;
@property (nonatomic, retain) INPerson *person;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
