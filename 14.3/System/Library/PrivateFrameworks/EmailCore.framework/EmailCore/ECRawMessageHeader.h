@class NSString;

@interface ECRawMessageHeader : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *transmittedName;
@property (readonly, copy, nonatomic) NSString *body;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHeaderFieldName:(id)a0 body:(id)a1;

@end
