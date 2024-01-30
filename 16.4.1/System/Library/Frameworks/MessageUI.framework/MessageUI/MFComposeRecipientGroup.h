@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}

- (BOOL)isGroup;
- (id)displayString;
- (int)property;
- (int)recordID;
- (void *)record;
- (id)address;
- (BOOL)isEqual:(id)a0;
- (id)children;
- (id)label;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;

@end
