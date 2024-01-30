@class NSString, NSArray;

@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)min:(id)a0;
+ (id)avg:(id)a0;
+ (id)total:(id)a0;
+ (id)avgDistinct:(id)a0;
+ (id)countDistinct:(id)a0;
+ (id)groupConcat:(id)a0 separator:(id)a1;
+ (id)maxDistinct:(id)a0;
+ (id)minDistinct:(id)a0;
+ (id)sumDistinct:(id)a0;
+ (id)totalDistinct:(id)a0;
+ (id)max:(id)a0;
+ (id)sum:(id)a0;
+ (id)count:(id)a0;

@end
