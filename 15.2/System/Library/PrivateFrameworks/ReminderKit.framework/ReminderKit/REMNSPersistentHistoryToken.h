@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0;

@end
