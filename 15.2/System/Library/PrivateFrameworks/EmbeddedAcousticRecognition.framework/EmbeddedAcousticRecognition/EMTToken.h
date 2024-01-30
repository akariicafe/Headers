@class NSString;

@interface EMTToken : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL precededBySpace;
@property (readonly, nonatomic) BOOL followedBySpace;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithText:(id)a0 confidence:(float)a1 precededBySpace:(BOOL)a2 followedBySpace:(BOOL)a3;

@end
