@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *topics;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 topics:(id)a1 score:(double)a2;

@end
