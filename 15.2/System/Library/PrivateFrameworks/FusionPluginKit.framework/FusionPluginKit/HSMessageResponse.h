@class NSString, NSDictionary, NSError, NSNumber;

@interface HSMessageResponse : HSMessage <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *messageStr;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSDictionary *responseDict;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *errorDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 statusCode:(id)a1;
- (id)initWithName:(id)a0 statusCode:(id)a1 andResponse:(id)a2;
- (id)initWithName:(id)a0 statusCode:(id)a1 andResponse:(id)a2 andError:(id)a3;

@end
