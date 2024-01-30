@class NSString;

@interface CPLTransaction : NSObject {
    BOOL _dirty;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (unsigned long long)transactionCount;
+ (void)beginTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (void)endTransactionWithIdentifier:(id)a0;
+ (id)newTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (id)transactions;

- (void)endTransaction;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
- (void).cxx_destruct;

@end
