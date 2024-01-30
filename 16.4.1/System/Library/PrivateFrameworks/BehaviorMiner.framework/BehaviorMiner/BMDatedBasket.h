@class NSSet, NSDate;

@interface BMDatedBasket : NSObject

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSSet *basket;

+ (id)undated:(id)a0;

- (void).cxx_destruct;
- (id)initWithBasket:(id)a0 Date:(id)a1;

@end
