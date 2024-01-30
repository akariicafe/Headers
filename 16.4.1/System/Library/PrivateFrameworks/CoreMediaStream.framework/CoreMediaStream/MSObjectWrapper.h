@protocol NSCoding, NSObject;

@interface MSObjectWrapper : NSObject

@property (nonatomic) long long size;
@property (nonatomic) long long uniqueID;
@property (readonly, nonatomic) id<NSObject, NSCoding> object;
@property (nonatomic) int errorCount;

+ (long long)indexOfObject:(id)a0 inWrapperArray:(id)a1;
+ (id)objectsFromWrappers:(id)a0;
+ (id)objectsFromWrappers:(id)a0 equalToObject:(id)a1;
+ (id)wrapperWithObject:(id)a0 size:(long long)a1;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 size:(long long)a1;

@end
