@class NSString, NSDate;

@interface AKToken : NSObject

@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *name;

+ (id)tokenWithBase64String:(id)a0;
+ (id)tokenWithDictionary:(id)a0;
+ (id)tokenWithValue:(id)a0 lifetime:(id)a1;

- (void).cxx_destruct;

@end
