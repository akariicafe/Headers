@class NSString, NSArray;

@interface _UIActivityItemCustomizationGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *customizations;

- (void).cxx_destruct;
- (id)_initGroupWithName:(id)a0 identifier:(id)a1 customizations:(id)a2;

@end
