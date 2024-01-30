@class NSString, NSArray;

@interface _UIActivityItemCustomizationGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *customizations;

- (id)_initGroupWithName:(id)a0 identifier:(id)a1 customizations:(id)a2;
- (void).cxx_destruct;

@end
