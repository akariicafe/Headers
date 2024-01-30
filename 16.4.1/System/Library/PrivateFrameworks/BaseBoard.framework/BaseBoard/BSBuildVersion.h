@class NSString;

@interface BSBuildVersion : NSObject

@property (readonly, nonatomic) long long majorBuildNumber;
@property (readonly, copy, nonatomic) NSString *majorBuildLetterString;
@property (readonly, nonatomic) long long minorBuildNumber;
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)fromString:(id)a0;

- (BOOL)isSameAs:(id)a0 withPrecision:(long long)a1;
- (BOOL)isAfter:(id)a0 withPrecision:(long long)a1;
- (id)initWithString:(id)a0;
- (BOOL)isAfter:(id)a0;
- (BOOL)isBefore:(id)a0 withPrecision:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)_compareAgainstBuildVersion:(id)a0 withPrecision:(long long)a1;
- (id)init;
- (id)description;
- (BOOL)isSameAs:(id)a0;
- (BOOL)isBefore:(id)a0;
- (void).cxx_destruct;

@end
