@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)storeTokens;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
