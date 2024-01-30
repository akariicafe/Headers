@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)uuid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fileName;
- (id)description;
- (void).cxx_destruct;
- (id)fileCreationDate;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
