@class NSString;

@interface TINameReadingPair : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *reading;

+ (id)nameReadingPairWithName:(id)a0 reading:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 reading:(id)a1;

@end
