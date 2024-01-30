@class NSString, NSNumber;

@interface Identity : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *negativeName;
@property (nonatomic, retain) NSNumber *fullConfidence;
@property (nonatomic, retain) NSNumber *setupInProgress;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, retain) NSNumber *isMultiUserContext;
@property (nonatomic, retain) NSNumber *isIdentifiedOrUnsure;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
