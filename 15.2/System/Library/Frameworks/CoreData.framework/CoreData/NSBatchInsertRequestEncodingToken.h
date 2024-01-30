@class NSString, NSArray, NSInputStream;

@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *entityName;
@property (readonly, retain, nonatomic) NSArray *objectsToInsert;
@property (readonly, retain, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) unsigned long long resultType;
@property (readonly, nonatomic) BOOL secure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initForRequest:(id)a0;

@end
