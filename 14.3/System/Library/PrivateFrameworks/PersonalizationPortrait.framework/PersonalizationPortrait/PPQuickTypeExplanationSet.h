@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    NSMutableSet *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)stringFromExplanation:(unsigned char)a0;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;

- (void)push:(unsigned char)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;

@end
