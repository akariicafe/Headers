@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}

- (id)address;
- (int)property;
- (int)recordID;
- (BOOL)isGroup;
- (id)children;
- (id)displayString;
- (void *)record;
- (id)placeholderName;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)compositeName;
- (id)commentedAddress;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (id)childrenWithCompleteMatches;
- (BOOL)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;

@end
