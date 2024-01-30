@class NSNumber, SpeakableLocation;

@interface INFriendLocation : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) SpeakableLocation *location;
@property (nonatomic, retain) NSNumber *isProactiveLocation;
@property (nonatomic, retain) NSNumber *locateInProgress;
@property (nonatomic, retain) NSNumber *isInaccurate;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
