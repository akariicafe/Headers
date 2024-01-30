@class NSString, NSDictionary, NSDate;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying>

@property (copy, nonatomic) NSString *shortTemplate;
@property (copy, nonatomic) NSString *longTemplate;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSDate *validUntil;

- (BOOL)isValidAtDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShortTemplate:(id)a0 longTemplate:(id)a1 parameters:(id)a2 validUntil:(id)a3;
- (id)fillTemplate:(id)a0 withDate:(id)a1;

@end
