@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;
- (id)fileName;
- (unsigned long long)hash;
- (id)uuid;
- (id)description;
- (id)fileCreationDate;
- (BOOL)isEqual:(id)a0;
- (long long)badgeType;

@end
