@class NSString, CNContact;

@interface SPSearchContactEntity : SPSearchEntity {
    CNContact *_contact;
}

@property (retain) NSString *contactIdentifier;

+ (id)contactStore;
+ (BOOL)supportsSecureCoding;

- (id)contact;
- (void).cxx_destruct;
- (id)queryString;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)tokenText;
- (BOOL)isPeopleSearch;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3;

@end
