@class NSString;

@interface OKSettingsTransactionItem : NSObject {
    NSString *key;
}

@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) NSString *key;

- (void)dealloc;
- (id)init;

@end
