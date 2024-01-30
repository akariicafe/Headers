@class NSString;

@interface VMUProgressBar : NSObject {
    NSString *_title;
    unsigned long long _totalItems;
    NSString *_itemName;
    unsigned long long _itemsDone;
    unsigned long long _successes;
    unsigned long long _failures;
}

- (void).cxx_destruct;
- (void)_printProgressBar;
- (void)setTitle:(id)a0 withTotalItems:(unsigned long long)a1;
- (void)updateItemName:(id)a0;
- (void)itemCompleteWithStatus:(BOOL)a0;

@end
