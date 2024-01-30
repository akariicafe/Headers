@class NSArray, HKFHIRRequestTaskEndState, NSString;

@interface HKFHIRRequestTaskEndStates : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndState *firstObject;
@property (readonly, nonatomic) NSString *eventLoggingDescription;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEndState:(id)a0;
- (id)initWithEndStates:(id)a0;

@end
