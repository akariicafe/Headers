@class NSString;

@interface PVEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id details;

+ (id)eventWithName:(id)a0 details:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 details:(id)a1;

@end
