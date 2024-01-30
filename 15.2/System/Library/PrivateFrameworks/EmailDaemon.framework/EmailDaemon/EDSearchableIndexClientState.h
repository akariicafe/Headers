@class NSNumber, NSString, NSDate;

@interface EDSearchableIndexClientState : NSObject {
    NSNumber *_transactionValue;
}

@property (nonatomic) long long transaction;
@property (readonly, nonatomic) NSNumber *transactionValue;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *systemBuildVersion;

+ (id)transactionAttributeKey;
+ (id)clientStateFromData:(id)a0;
+ (id)clientState;

- (id)description;
- (void)addTransactionValueToAttributeSet:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)archiveRepresentation;
- (id)initWithDictionary:(id)a0;

@end
