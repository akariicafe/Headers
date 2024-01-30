@class NSArray;

@interface GKComposeHeaderWithStaticRecipients : GKComposeHeaderField

@property (retain, nonatomic) NSArray *recipientNameStrings;

- (void)dealloc;
- (void)layoutSubviews;

@end
