@class NSString, NSFormatter, NSArray;
@protocol NSObject;

@interface HMFAttributeDescription : NSObject <HMFObject>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id<NSObject> value;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSFormatter *formatter;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1 options:(unsigned long long)a2 formatter:(id)a3;
- (id)initWithName:(id)a0 value:(id)a1;

@end
