@class NSString, NSArray;

@interface _NAUINamedViewConstraints : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *constraints;
@property (readonly, copy, nonatomic) id stalenessToken;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 constraints:(id)a1 stalenessToken:(id)a2;

@end
