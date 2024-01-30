@class NSString, NSDictionary, NSData, NSNumber;

@interface SFIndexState : NSObject <SFIndexState, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *percentMessagesIndexed;
@property (copy, nonatomic) NSNumber *percentAttachmentsIndexed;
@property (copy, nonatomic) NSNumber *searchIndex;
@property (copy, nonatomic) NSNumber *totalMessageCount;
@property (copy, nonatomic) NSNumber *indexedMessageCount;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;

@end
