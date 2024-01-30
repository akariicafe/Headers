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

- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)raise;
- (BOOL)_isUnarchived;
- (void)_markAsUnarchived;
- (BOOL)_installStackTraceKeyIfNeeded;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (void)dealloc;

@end
