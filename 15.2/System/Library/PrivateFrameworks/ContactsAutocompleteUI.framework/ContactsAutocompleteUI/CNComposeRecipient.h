@class CNComposeRecipientOriginContext, NSArray, NSString, NSSet, CNContact, NSPersonNameComponents, CNAutocompleteResult;

@interface CNComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (retain, nonatomic) NSArray *cachedCompleteMatches;
@property (retain, nonatomic) NSArray *cachedMatchedStrings;
@property (retain, nonatomic) NSArray *cachedSortedMembers;
@property (retain, nonatomic) NSSet *cachedHandles;
@property (copy, nonatomic) NSString *compositeName;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *valueIdentifier;
@property (copy, nonatomic) NSString *unlocalizedLabel;
@property (copy, nonatomic) NSString *inputAddress;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL isMemberOfGroup;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *displayString;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) CNComposeRecipientOriginContext *originContext;
@property (readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
@property (readonly, nonatomic) BOOL showsAccessoryButton;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) BOOL isSuggestedRecipient;
@property (readonly, nonatomic) BOOL showsChevronButton;
@property (readonly, nonatomic) BOOL isDirectoryServerResult;
@property (readonly, nonatomic) NSString *normalizedAddress;
@property (readonly, nonatomic) NSString *commentedAddress;
@property (readonly, nonatomic) NSString *uncommentedAddress;
@property (readonly, nonatomic) NSString *stringForEqualityTesting;
@property (readonly, copy, nonatomic) NSString *pasteboardString;
@property (readonly, nonatomic) BOOL supportsPasteboardUnarchiving;
@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) NSString *placeholderName;
@property (readonly, nonatomic) NSString *shortName;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)os_log;
+ (id)descriptorsForRequiredKeysForContact;
+ (id)composeRecipientWithAutocompleteResult:(id)a0;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)children;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContact:(id)a0 address:(id)a1 kind:(unsigned long long)a2;
- (id)labeledValueIdentifier;
- (id)sortedChildren;
- (id)unifiedHandles;
- (id)initWithContact:(id)a0 address:(id)a1 displayString:(id)a2 kind:(unsigned long long)a3;
- (id)associatedHandles;
- (id)alternativeToDisplayString;
- (void)addRecipientToPasteboard:(id)a0;
- (id)rawDisplayString;
- (id)childrenWithCompleteMatches;
- (BOOL)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (id)preferredSendingAddress;
- (id)displayStringPreferringNickname:(BOOL)a0;
- (id)_unformattedAddress;
- (BOOL)isEquivalentAddressToRecipient:(id)a0;

@end
