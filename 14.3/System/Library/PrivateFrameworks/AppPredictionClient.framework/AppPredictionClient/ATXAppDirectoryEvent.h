@class NSNumber, NSString, NSDate;

@interface ATXAppDirectoryEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSNumber *categoryID;
@property (retain, nonatomic) NSNumber *categoryIndex;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSNumber *bundleIndex;
@property (retain, nonatomic) NSNumber *searchQueryLength;
@property (retain, nonatomic) NSNumber *searchTab;

+ (id)appDirectoryEventWithEventType:(unsigned long long)a0 metadata:(id)a1;
+ (id)_objectForKey:(id)a0 classType:(Class)a1 fromMetadata:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 eventType:(unsigned long long)a1 categoryID:(id)a2 categoryIndex:(id)a3 bundleId:(id)a4 bundleIndex:(id)a5 searchQueryLength:(id)a6 searchTab:(id)a7;
- (id)initWithAbsoluteDate:(double)a0 eventType:(unsigned long long)a1 categoryID:(id)a2 categoryIndex:(id)a3 bundleId:(id)a4 bundleIndex:(id)a5 searchQueryLength:(id)a6 searchTab:(id)a7;
- (BOOL)isEqualToATXAppDirectoryEvent:(id)a0;

@end
