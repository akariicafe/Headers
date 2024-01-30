@class NSArray, NSDictionary;

@interface FPUserInfo : NSObject

@property (readonly) NSArray *keys;
@property (readonly) NSArray *values;
@property (readonly) NSDictionary *userInfo;

+ (id)mergeWithUserInfo:(id)a0 intoParentUserInfo:(id)a1;
+ (id)zipWithArray1:(id)a0 array2:(id)a1;
+ (id)unzipKeysWithZippedArray:(id)a0;
+ (id)unzipValuesWithZippedArray:(id)a0;

- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0 values:(id)a1;

@end
