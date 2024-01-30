@class NSString, CNContact;

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;

@end
