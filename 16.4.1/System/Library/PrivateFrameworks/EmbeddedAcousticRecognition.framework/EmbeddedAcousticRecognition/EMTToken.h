@class NSString;

@interface EMTToken : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) BOOL precededBySpace;
@property (readonly, nonatomic) BOOL followedBySpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 confidence:(float)a1 precededBySpace:(BOOL)a2 followedBySpace:(BOOL)a3;
- (id)initWithText:(id)a0 confidence:(float)a1 score:(float)a2 precededBySpace:(BOOL)a3 followedBySpace:(BOOL)a4;

@end
