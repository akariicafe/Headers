@class NSString, NSData, VOSubstitution;

@interface VOLanguage : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *languageID;
@property (retain, nonatomic) VOSubstitution *substitution;

+ (id)fetchRequest;

@end
