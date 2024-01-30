@class NSString, NSDate;

@interface SSNoteResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *formattedBody;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastOpenDate;
@property (retain, nonatomic) NSDate *modificationDate;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;

@end
