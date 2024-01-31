@class CNContactStore, CNMutableContact;

@interface CNContactImageUpdater : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNMutableContact *contact;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (void)updateContact:(id)a0 withImagePropertiesFromContact:(id)a1;
- (BOOL)updateImageWithImageContact:(id)a0 setAsMe:(BOOL)a1;

@end
