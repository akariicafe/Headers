@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem

@property (nonatomic, getter=isOpen) BOOL open;
@property (copy, nonatomic) NSArray *children;

- (id)debugDescription;
- (void).cxx_destruct;

@end
