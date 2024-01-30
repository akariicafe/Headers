@interface PGGraphChange : NSObject

@property (readonly) unsigned long long type;
@property (readonly, nonatomic) unsigned long long changeCount;

- (id)description;

@end
