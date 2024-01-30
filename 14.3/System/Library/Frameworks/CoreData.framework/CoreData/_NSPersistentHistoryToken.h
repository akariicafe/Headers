@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)storeTokens;
- (void)encodeWithCoder:(id)a0;

@end
