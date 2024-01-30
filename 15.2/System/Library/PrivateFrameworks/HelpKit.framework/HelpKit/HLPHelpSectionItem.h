@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem

@property (nonatomic, getter=isOpen) BOOL open;
@property (copy, nonatomic) NSArray *children;

- (void).cxx_destruct;
- (id)debugDescription;

@end
