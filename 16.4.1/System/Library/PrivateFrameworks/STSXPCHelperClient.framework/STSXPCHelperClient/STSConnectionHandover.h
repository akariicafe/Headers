@class NSArray, NSMutableArray;

@interface STSConnectionHandover : NSObject <NSSecureCoding> {
    NSMutableArray *_alternativeCarriers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion;
@property (readonly, nonatomic) NSArray *alternativeCarriers;

+ (id)requestWithAlternativeCarriers:(id)a0;
+ (id)_connectionHandoverWithNdefMessage:(id)a0;
+ (id)_createNdefWithType:(long long)a0 alternativeCarriers:(id)a1 errorRecord:(id)a2;
+ (id)connectionHandoverWithData:(id)a0;
+ (id)selectWithAlternativeCarriers:(id)a0 error:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addAlternativeCarrier:(id)a0;

@end
