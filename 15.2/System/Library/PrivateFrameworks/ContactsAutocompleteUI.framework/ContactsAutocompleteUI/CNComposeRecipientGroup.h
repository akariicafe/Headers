@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray *_children;
}

- (id)address;
- (BOOL)isGroup;
- (id)children;
- (id)displayString;
- (id)placeholderName;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)compositeName;
- (id)commentedAddress;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (BOOL)showsChevronButton;
- (void)addRecipientToPasteboard:(id)a0;
- (id)childrenWithCompleteMatches;
- (BOOL)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;

@end
