@class NSString;

@interface PSIIndexToken : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) short category;
@property (readonly, nonatomic) short owningCategory;

- (id)description;
- (id)initWithText:(id)a0 identifier:(id)a1 category:(short)a2 owningCategory:(short)a3;
- (void).cxx_destruct;

@end
