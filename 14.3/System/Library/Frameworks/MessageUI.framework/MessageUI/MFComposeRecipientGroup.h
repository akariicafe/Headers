@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}

- (int)property;
- (BOOL)isGroup;
- (id)placeholderName;
- (void).cxx_destruct;
- (id)childrenWithCompleteMatches;
- (BOOL)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)address;
- (int)recordID;
- (void *)record;
- (id)children;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)sortedChildren;
- (id)displayString;
- (id)compositeName;
- (id)commentedAddress;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;

@end
