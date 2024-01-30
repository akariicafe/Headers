@class NSString, AgeDateTime;

@interface ContactAttribute : INObject

@property (nonatomic) long long contactAttributeType;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *handleValue;
@property (nonatomic, retain) AgeDateTime *ageDateTime;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
