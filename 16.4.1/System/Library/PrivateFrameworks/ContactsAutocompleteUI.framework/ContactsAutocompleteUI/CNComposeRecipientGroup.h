@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray *_children;
}

- (BOOL)isGroup;
- (id)displayString;
- (id)address;
- (BOOL)isEqual:(id)a0;
- (id)children;
- (id)label;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (void)addRecipientToPasteboard:(id)a0;
- (BOOL)showsChevronButton;

@end
