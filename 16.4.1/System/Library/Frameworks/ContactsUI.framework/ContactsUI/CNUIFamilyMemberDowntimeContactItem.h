@class NSString, CNContact;

@interface CNUIFamilyMemberDowntimeContactItem : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *label;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 label:(id)a1;

@end
