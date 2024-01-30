@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray *_children;
}

- (BOOL)isGroup;
- (id)placeholderName;
- (void)addRecipientToPasteboard:(id)a0;
- (void).cxx_destruct;
- (id)childrenWithCompleteMatches;
- (BOOL)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)address;
- (id)children;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)sortedChildren;
- (BOOL)showsChevronButton;
- (id)displayString;
- (id)compositeName;
- (id)commentedAddress;
- (id)unlocalizedLabel;

@end
