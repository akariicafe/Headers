@class NSDictionary;

@interface HMIJSONUnarchiver : NSCoder

@property (readonly) id container;
@property (retain) NSDictionary *classMap;

+ (id)objectWithJSONData:(id)a0 classMap:(id)a1;
+ (id)objectWithJSONObject:(id)a0 classMap:(id)a1;
+ (id)objectWithJSONObjectString:(id)a0 classMap:(id)a1;

- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void).cxx_destruct;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)initWithJSONObject:(id)a0;
- (id)_objectWithJSONObject:(id)a0 allowedClasses:(id)a1;

@end
