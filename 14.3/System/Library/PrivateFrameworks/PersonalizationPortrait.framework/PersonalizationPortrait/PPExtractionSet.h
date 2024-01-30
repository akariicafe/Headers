@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *namedEntityRecords;
@property (readonly, nonatomic) NSArray *topicRecords;

- (id)merge:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamedEntityRecords:(id)a0 topicRecords:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
