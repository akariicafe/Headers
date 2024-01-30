@class NSString;

@interface _PSAlter : NSObject

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double distanceToCluster;
@property (nonatomic) double timeSinceLastContact;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 andDistance:(double)a1 andTime:(double)a2;

@end
