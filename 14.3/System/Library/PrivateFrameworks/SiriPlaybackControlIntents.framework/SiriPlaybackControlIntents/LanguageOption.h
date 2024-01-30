@class NSString, NSNumber;

@interface LanguageOption : INObject

@property (nonatomic, readonly) NSString *description;
@property (copy, nonatomic) NSString *languageIdentifier;
@property (copy, nonatomic) NSString *languageTag;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *isActive;

@end
