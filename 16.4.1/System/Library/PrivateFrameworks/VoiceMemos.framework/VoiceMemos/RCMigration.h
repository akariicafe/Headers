@class NSNumber, NSString, NSDate;

@interface RCMigration : NSManagedObject

@property (copy, nonatomic) NSNumber *flags;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long migrationFlags;
@property (readonly, nonatomic) BOOL hasEncryptedFields;
@property (readonly, nonatomic) int migrationReason;
@property (readonly, nonatomic) NSString *jsonDescription;

+ (id)createEncryptedFieldsMigration:(int)a0 context:(id)a1;

- (id)description;
- (id)_descriptionDictionary;
- (id)_initWithFlags:(unsigned long long)a0 context:(id)a1;
- (void)setHasEncryptedFields:(BOOL)a0;

@end
