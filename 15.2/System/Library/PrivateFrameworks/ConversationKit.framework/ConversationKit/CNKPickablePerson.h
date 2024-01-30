@class TUHandle, NSString, CNContact, NSSet;

@interface CNKPickablePerson : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSString *address;
@property (retain, nonatomic) TUHandle *handle;
@property (readonly, nonatomic) NSSet *destinations;

- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (id)initWithContact:(id)a0 handle:(id)a1;
- (id)initWithContact:(id)a0 address:(id)a1;

@end
