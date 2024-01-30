@class NSString, NSArray, NSDictionary;

@interface IAMContent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSDictionary *contentParameters;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithICMessageContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 images:(id)a3 actions:(id)a4 contentParameters:(id)a5 identifier:(id)a6;
- (void).cxx_destruct;

@end
