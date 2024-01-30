@class NSString, CNContact;

@interface _CNContactVCardNameSummzarizationScope : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *fullName;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 fullName:(id)a1;

@end
