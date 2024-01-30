@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)initWithPersistentHistoryToken:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
