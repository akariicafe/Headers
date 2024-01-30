@class NSString, NSPredicate, NSDictionary;

@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *entityName;
@property (readonly, retain, nonatomic) NSPredicate *predicate;
@property (readonly, retain, nonatomic) NSDictionary *columnsToUpdate;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) long long nullValueCount;
@property (readonly, nonatomic) BOOL includeSubEntities;
@property (readonly, nonatomic) BOOL secure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initForRequest:(id)a0;

@end
