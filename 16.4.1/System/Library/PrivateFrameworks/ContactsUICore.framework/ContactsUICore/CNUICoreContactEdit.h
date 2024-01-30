@class CNContact;

@interface CNUICoreContactEdit : NSObject

@property (readonly, nonatomic) CNContact *original;
@property (readonly, nonatomic) CNContact *modified;
@property (readonly, nonatomic) BOOL originalAndModifiedDiffer;

- (id)initWithContact:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)editBySettingModifiedContact:(id)a0;
- (id)initWithOriginalContact:(id)a0 modifiedContact:(id)a1;
- (BOOL)modifiesContact:(id)a0;

@end
