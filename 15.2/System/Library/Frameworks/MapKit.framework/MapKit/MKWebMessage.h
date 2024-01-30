@class NSDictionary, NSString, NSNumber;
@protocol NSCopying;

@interface MKWebMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *callee;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSNumber *callNumber;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) id<NSCopying> arguments;
@property (copy, nonatomic) id<NSCopying> result;
@property (copy, nonatomic) NSString *errorMessage;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONObject:(id)a0;

@end
