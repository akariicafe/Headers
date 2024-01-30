@class NSString, NSArray;

@interface EFSQLFunction : NSObject <EFSQLValueExpressable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)min:(id)a0;
+ (id)hex:(id)a0;
+ (id)char:(id)a0;
+ (id)lower:(id)a0;
+ (id)upper:(id)a0;
+ (id)coalesce:(id)a0;
+ (id)glob:(id)a0 expression:(id)a1;
+ (id)ifNull:(id)a0 second:(id)a1;
+ (id)inStr:(id)a0 second:(id)a1;
+ (id)like:(id)a0 expression:(id)a1;
+ (id)like:(id)a0 expression:(id)a1 escape:(unsigned short)a2;
+ (id)ltrim:(id)a0 pattern:(id)a1;
+ (id)nullIf:(id)a0 second:(id)a1;
+ (id)replace:(id)a0 pattern:(id)a1 replacement:(id)a2;
+ (id)round:(id)a0 digits:(id)a1;
+ (id)rtrim:(id)a0 pattern:(id)a1;
+ (id)substr:(id)a0 index:(id)a1 length:(id)a2;
+ (id)trim:(id)a0 pattern:(id)a1;
+ (id)unlikely:(id)a0;
+ (id)max:(id)a0;
+ (id)length:(id)a0;
+ (id)typeOf:(id)a0;
+ (id)likely:(id)a0;
+ (id)abs:(id)a0;

@end
