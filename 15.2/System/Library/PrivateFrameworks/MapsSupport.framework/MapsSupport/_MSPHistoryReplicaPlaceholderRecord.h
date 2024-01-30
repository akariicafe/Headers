@class NSString, NSData, MSPVectorTimestamp, NSDate;

@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 modificationDate:(id)a2;

@end
