@class NSData, NSString, NSDate;

@interface ParseOverride : NSManagedObject

@property (nonatomic, copy) NSData *archivedNluRequestRule;
@property (nonatomic, copy) NSDate *creation;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *inputText;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *overrideId;
@property (nonatomic) int parserIdentifier;
@property (nonatomic, copy) NSData *userParse;
@property (nonatomic) int utteranceComparisonType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
