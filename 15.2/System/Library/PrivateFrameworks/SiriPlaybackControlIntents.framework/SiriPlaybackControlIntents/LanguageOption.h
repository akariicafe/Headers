@class NSString, NSNumber;

@interface LanguageOption : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *languageIdentifier;
@property (nonatomic, copy) NSString *languageTag;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *isActive;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
