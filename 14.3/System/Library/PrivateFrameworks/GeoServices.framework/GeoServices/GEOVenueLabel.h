@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *detail;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;
- (id)initWithName:(id)a0 shortName:(id)a1 detail:(id)a2;
- (id)initWithName:(id)a0;

@end
