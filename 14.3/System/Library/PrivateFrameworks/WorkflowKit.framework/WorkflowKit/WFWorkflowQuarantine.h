@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) NSDate *importDate;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)serializedData;
- (id)initWithSourceAppIdentifier:(id)a0 importDate:(id)a1;
- (id)initWithSerializedData:(id)a0;

@end
