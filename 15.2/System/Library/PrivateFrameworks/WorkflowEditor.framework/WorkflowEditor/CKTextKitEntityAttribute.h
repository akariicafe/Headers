@protocol NSObject;

@interface CKTextKitEntityAttribute : NSObject

@property (readonly, nonatomic) id<NSObject> entity;

- (id)initWithEntity:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
