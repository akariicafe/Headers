@class NSString, CNLabeledValue, CNContact;

@interface MSPSharedTripContact : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSString *_originalHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isPhoneNumber;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSString *handleForIDS;
@property (readonly, nonatomic) NSString *displayName;

+ (id)_propertiesForFetching;
+ (id)contactsFromCNContact:(id)a0 matchingHandles:(id)a1;
+ (id)contactsFromHandles:(id)a0;
+ (id)contactsFromCNContact:(id)a0;
+ (id)contactsFromIDSHandles:(id)a0;
+ (void)setAdditionalKeyDescriptorsForContactFetching:(id)a0;
+ (id)contactsFromCNContact:(id)a0 andIdentifiers:(id)a1;

- (id)_stringValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithContactHandle:(id)a0;
- (id)initWithContact:(id)a0 handle:(id)a1;
- (void)_populateFromContactUsingHandle:(id)a0;
- (id)initWithContact:(id)a0 labeledValue:(id)a1;

@end
