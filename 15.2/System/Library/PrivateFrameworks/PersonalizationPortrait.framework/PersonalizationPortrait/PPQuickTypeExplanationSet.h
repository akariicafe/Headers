@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    NSMutableSet *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;
+ (id)stringFromExplanation:(unsigned char)a0;

- (void)enumerateWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)push:(unsigned char)a0;
- (unsigned long long)hash;

@end
