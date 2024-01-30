@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)fileName;
- (long long)badgeType;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fileCreationDate;
- (id)uuid;
- (unsigned long long)hash;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
