@class NSString;

@interface CPSMessageCell : CPUIMessageCell <CPSCellSizable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForListItem:(id)a0;

- (void)configureWithMessageListItem:(id)a0;

@end
