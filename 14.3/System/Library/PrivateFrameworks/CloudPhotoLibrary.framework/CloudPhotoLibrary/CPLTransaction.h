@class NSString;

@interface CPLTransaction : NSObject {
    BOOL _dirty;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (unsigned long long)transactionCount;
+ (id)transactions;
+ (void)endTransactionWithIdentifier:(id)a0;
+ (void)beginTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (id)newTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;

- (void)endTransaction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;

@end
