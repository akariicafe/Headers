@class NSSet, NSMutableSet;

@interface PGHobby : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSMutableSet *momentNodes;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
