@class NSNumber, NSString, NSDate;

@interface EDSearchableIndexClientState : NSObject {
    NSNumber *_transactionValue;
}

@property (nonatomic) long long transaction;
@property (readonly, nonatomic) NSNumber *transactionValue;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *systemBuildVersion;

+ (id)clientState;
+ (id)clientStateFromData:(id)a0;
+ (id)transactionAttributeKey;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)archiveRepresentation;
- (void)addTransactionValueToAttributeSet:(id)a0;

@end
