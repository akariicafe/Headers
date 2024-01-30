@class UIActivity;

@interface _UIActivitySortItem : NSObject

@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) long long group;
@property (readonly, nonatomic) id secondarySortValue;
@property (readonly, nonatomic) id tertiarySortValue;

+ (id)sortDescriptorForActivity:(id)a0 withGroup:(long long)a1 secondarySortValue:(id)a2;
+ (id)sortDescriptorForActivity:(id)a0 withGroup:(long long)a1 secondarySortValue:(id)a2 tertiarySortValue:(id)a3;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;

@end
