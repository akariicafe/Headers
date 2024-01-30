@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;

+ (void)raise:(id)a0 format:(id)a1;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (void)raise:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)raise;
- (BOOL)_isUnarchived;
- (void)_markAsUnarchived;
- (BOOL)_installStackTraceKeyIfNeeded;
- (id)init;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;

@end
