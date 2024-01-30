@class NSMutableDictionary;
@protocol CSLPRFAppIconCellHelperDelegate;

@interface CSLPRFAppIconCellHelper : NSObject {
    NSMutableDictionary *_outstandingRequests;
}

@property (weak, nonatomic) id<CSLPRFAppIconCellHelperDelegate> delegate;

- (id)blankIcon;
- (id)init;
- (void).cxx_destruct;
- (void)didCompleteLoadForIdentifier:(id)a0;
- (id)fetchLazyIconForSpecifier:(id)a0;
- (void)loadIconForSpecifier:(id)a0 iconIdentifier:(id)a1;

@end
