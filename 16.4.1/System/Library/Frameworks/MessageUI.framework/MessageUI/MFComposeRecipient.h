@class NSArray, NSString, MFComposeRecipientOriginContext, CNContact, CNAutocompleteResult;

@interface MFComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding> {
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    NSString *_compositeName;
}

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (retain, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) NSString *valueIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *unlocalizedLabel;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (retain, nonatomic) MFComposeRecipientOriginContext *originContext;
@property (readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
@property (readonly, nonatomic) BOOL showsAccessoryButton;
@property (readonly, nonatomic) BOOL isGroup;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL isSuggestedRecipient;
@property (readonly, nonatomic) BOOL isDirectoryServerResult;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *normalizedAddress;
@property (readonly, nonatomic) NSString *commentedAddress;
@property (readonly, nonatomic) NSString *uncommentedAddress;
@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) NSString *placeholderName;
@property (readonly, nonatomic) NSString *compositeName;
@property (readonly, nonatomic) NSString *shortName;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)_requiredKeyDescriptors;
+ (id)composeRecipientWithAutocompleteResult:(id)a0;
+ (id)mf_recipientWithGALResult:(id)a0;
+ (id)recipientWithProperty:(int)a0 address:(id)a1;
+ (id)recipientWithRecord:(void *)a0 property:(int)a1 identifier:(int)a2;
+ (id)recipientWithRecord:(void *)a0 recordID:(int)a1 property:(int)a2 identifier:(int)a3;

- (id)shortName;
- (void)setAddress:(id)a0;
- (int)property;
- (void)encodeWithCoder:(id)a0;
- (int)recordID;
- (id)initWithCoder:(id)a0;
- (void *)record;
- (int)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)address;
- (void)setIdentifier:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)children;
- (void).cxx_destruct;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (id)initWithContact:(id)a0 address:(id)a1 kind:(unsigned long long)a2;
- (id)normalizedAddress;
- (id)uncommentedAddress;
- (id)labeledValueIdentifier;
- (id)sortedChildren;
- (id)_unformattedAddress;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (id)initWithRecord:(void *)a0 recordID:(int)a1 property:(int)a2 identifier:(int)a3 address:(id)a4;
- (id)preferredSendingAddress;
- (void)setRecord:(void *)a0 recordID:(int)a1 identifier:(int)a2;
- (BOOL)wasCompleteMatch;

@end
