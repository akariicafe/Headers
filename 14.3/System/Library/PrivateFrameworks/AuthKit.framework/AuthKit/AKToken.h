@class NSString, NSDate;

@interface AKToken : NSObject

@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *name;

+ (id)tokenWithValue:(id)a0 lifetime:(id)a1;
+ (id)tokenWithBase64String:(id)a0;

- (void).cxx_destruct;

@end
