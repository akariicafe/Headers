@class NSSet, NSMutableSet;

@interface PGHobby : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSMutableSet *momentNodes;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
